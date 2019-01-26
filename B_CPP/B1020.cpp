#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct mooncake {
    double stock, lump, unit;
  };

bool cmp(mooncake a, mooncake b) {
    return a.unit > b.unit;
}

int main() {


  int types;
  double needs;
  scanf("%d %lf", &types, &needs);
  getchar();
  vector<mooncake> arr(types); // initialization of vector



  for (int i = 0; i < types; i++) {
    scanf("%lf", &arr[i].stock);
  }
  getchar();
  for (int i = 0; i < types; i++) {
    scanf("%lf", &arr[i].lump);
    arr[i].unit = arr[i].lump / arr[i].stock;
  }

  sort(arr.begin(), arr.end(), cmp);
  double result = 0.0;
  for (int i = 0; i < types; i++) {
    if (needs <= arr[i].stock) {
      result += needs * arr[i].unit;
      break;
    } else {
      result += arr[i].lump;
      needs -= arr[i].stock;
    }
  }
  printf("%.2f", result);
  return 0;
}
