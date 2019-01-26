#include <stdio.h>
#include <string.h>
int main() {
  char dividend[1002];
  int divisor;
  scanf("%s %d", dividend, &divisor);
  int temp = (dividend[0] - 48) / divisor;
  int remaining = (dividend[0] - 48) % divisor;
  int len = strlen(dividend);
  if (len == 1 || temp != 0) {
    putchar(temp + 48);
  }
  for (int i = 1; i < len; i++) {
    temp = remaining * 10 + dividend[i] - 48;
    putchar(temp / divisor + 48);
    remaining = temp % divisor;
  }
  putchar(' ');
  putchar(remaining + 48);

}
