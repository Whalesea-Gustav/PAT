#include <stdio.h>
#include <math.h>

int main() {
  int A;
  int DA;
  int B;
  int DB;
  int count = 0;
  int ans = 0;

  scanf("%d %d %d %d", &A, &DA, &B, &DB);

  while (A > 0) {
    if (A % 10 == DA) {
      int aux = DA;
      for (int i = 0; i < count; i++) {
          aux *= 10;
      }
      ans += aux;
      count++;
    }
    A /= 10;
  }

  count = 0;
  while (B > 0) {
    if (B % 10 == DB) {
      int aux = DB;
      for (int i = 0; i < count; i++) {
          aux *= 10;
      }
      ans += aux;
      count++;
    }
    B /= 10;
  }

  printf("%d", ans);
}
