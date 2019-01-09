#include <stdio.h>

int arr[1000];
int main() {
  int n, x;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  getchar();

  scanf("%d", &x);
  int i = 0;
  for (; i < n; i++) {
    if (arr[i] == x) {
      printf("%d\n", i);
    }
  }

  if (i == n) {
    printf("-1\n");
  }

}
