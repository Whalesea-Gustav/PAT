#include <stdio.h>
#include <math.h>


float f(float x) {
  return pow(x, 3) - x - 1;
}

float bisection(float (*f) (float), float x1, float x2) {
   float x0 = (x1 + x2) / 2;
   if (fabs((*f)(x0)) < pow(10, -6)) {
     return x0;
   } else if ((*f)(x0) * (*f)(x1) < 0) {
     return bisection(f, x0, x1);
   } else {
     return bisection(f, x0, x2);
   }
}

int main() {
  float (*fun) (float x);
  fun = &f;

  int x1, x2;
  scanf("%d,%d", &x1, &x2);
  printf("root is:%f", bisection(fun, (float) x1, (float) x2));
}
