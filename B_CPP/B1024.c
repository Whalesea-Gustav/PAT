#include <stdio.h>

int main() {
  // Symbol
  if (getchar() == '-') putchar('-');

  char numbers[9999];
  int exponent;
  int len = 0;
  int c;
  while ((c=getchar()) !=  'E') {
    if (c == '.') continue;
    numbers[len] = c;
    len++;
  }
  scanf("%d", &exponent);
  if (exponent >= 0) {
    for (int i = 0; i <= exponent; i++) {
      if (i < len) {
        putchar(numbers[i]);
      } else {
        putchar('0');
      }
    }

    if (len > exponent+1) putchar('.');
    for (int i = exponent+1; i < len; i++) {
      putchar(numbers[i]);
    }
  } else {
    putchar('0');
    putchar('.');
    for (int i = 1; i < -exponent; i++)  putchar('0');

    for (int i = 0; i < len; i++) putchar(numbers[i]);
  }

}
