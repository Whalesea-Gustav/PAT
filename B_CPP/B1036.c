#include <stdio.h>
#include <math.h>
int main() {
  int length;
  char c;
  scanf("%d %c", &length, &c);

  for (int i = 0; i < length; i++) {
    putchar(c);
  }
  putchar('\n');

  for (int i = 0; i < ceil(((double)length) / 2) - 2; i++) {
    putchar(c);
    for (int j = 0; j < length - 2; j++) {
      putchar(' ');
    }
    putchar(c);
    putchar('\n');
  }

  for (int i = 0; i < length; i++) {
    putchar(c);
  }
  putchar('\n');
}
