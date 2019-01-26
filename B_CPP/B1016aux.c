#include <stdio.h>
#include <math.h>

int main() {
  int a = 3 * pow(10, 2);
  int b = 3 * pow(10, 1);
  int c = 3 * pow(10, 0);
  int abc = 3 * pow(10, 2) + 3 * pow(10, 1) + 3 * pow(10, 0);
  double d = 3 * pow(10, 2);
  double e = 3 * pow(10, 1);
  double f = 3 * pow(10, 0);
  printf("%d, %d, %d\n", a, b, c);
  printf("%d\n", abc);
  printf("%.2f, %.2f, %.2f\n",d, e, f);
}
