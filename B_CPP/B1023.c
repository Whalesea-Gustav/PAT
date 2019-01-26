#include <stdio.h>

int main() {
  int numbers[10] = {0};
  int k;
  int count = 0;
  while (scanf("%d", &k) != EOF) {
    numbers[count] = k;
    count++;
  }
  for (int i = 1; i < 10; i++) {
    if (numbers[i] != 0) {
      putchar(i + '0');
      numbers[i]--;
      break;
    }
  }

  for (int i = 0; i < 10; i++) {
    while (numbers[i] > 0) {
      putchar(i+'0');\
      numbers[i]--;
    }
  }
  putchar('\n');
}
