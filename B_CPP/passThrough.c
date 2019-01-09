#include <stdio.h>

int main() {
  // read the number of input lines
  int n;
  scanf("%d", &n);
  getchar();                              /*read newline          */
  // read n lines
  for (int i = 0; i < n; i++) {

    int c;
    int count[3] = {0, 0, 0};
    int pos = 0;
    while ((c=getchar()) != '\n') {
      if (c == 'A') {
        count[pos]++;
      } else if (c == 'P' && pos == 0) {
        pos = 1;                          /*count A between P and T*/
      } else if (c == 'T' && pos == 1) {
        pos = 2;                          /*count A after T       */
      } else {
        break;                            /* wrong string         */
      }
    }

    if (count[2] == count[0] * count[1] && pos == 2 && c == '\n' && count[1]) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }

    if (c != '\n') {                     /*if not read whole string, keep read remaining string*/
      while ((c=getchar()) != '\n') {
        ;
      }
    }
  }
}
