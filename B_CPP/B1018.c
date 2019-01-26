#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  getchar();

  char first;
  char second;

  int draw = 0;
  int firstWin = 0;
  int firstDefeated = 0;

  int firstB = 0;
  int firstC = 0;
  int firstJ = 0;
  int secondB = 0;
  int secondC = 0;
  int secondJ = 0;

  for (int i = 0; i < n; i++) {
    scanf("%c %c", &first, &second);
    getchar();

    if (first == second) {
      draw++;
    } else if (first == 'B') {
      if (second == 'C') {
        firstWin++;
        firstB++;
      } else if (second == 'J') {
        secondJ++;
        firstDefeated++;
      }
    } else if (first == 'C') {
      if (second == 'B') {
        secondB++;
        firstDefeated++;
      } else if (second == 'J') {
        firstC++;
        firstWin++;
      }
    } else { // first == 'J'
      if (second == 'B') {
        firstWin++;
        firstJ++;
      } else if (second == 'C') {
        firstDefeated++;
        secondC++;
      }
    }
  }

  /***************/
  /*    printf   */
  /***************/

  printf("%d %d %d\n", firstWin, draw, firstDefeated);
  printf("%d %d %d\n", firstDefeated, draw, firstWin);
  if (firstB >= firstC && firstB >= firstJ) {
    putchar('B');
  } else if (firstC >= firstJ) {
    putchar('C');
  } else {
    putchar('J');
  }

  putchar(' ');

  if (secondB >= secondC && secondB >= secondJ) {
    putchar('B');
  } else if (secondC >= secondJ) {
    putchar('C');
  } else {
    putchar('J');
  }
}
