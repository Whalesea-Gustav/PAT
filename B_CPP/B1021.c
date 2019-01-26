#include <stdio.h>

int main() {
  int places[10] = {0};
  char i;
  while ((i = getchar()) != EOF && (i != '\n')) {
    switch(i) {
      case '0' :
        places['0'-'0']++;
        break;
      case '1' :
        places['1'-'0']++;
        break;
      case '2' :
        places['2'-'0']++;
        break;
      case '3' :
        places['3'-'0']++;
        break;
      case '4' :
        places['4'-'0']++;
        break;
      case '5' :
        places['5'-'0']++;
        break;
      case '6' :
        places['6'-'0']++;
        break;
      case '7' :
        places['7'-'0']++;
        break;
      case '8' :
        places['8'-'0']++;
        break;
      case '9' :
        places['9'-'0']++;
        break;
    }
  }

  for (int i = 0; i < 10; i++) {
    if (places[i] == 0) continue;
    else printf("%d:%d\n", i, places[i]);
  }
}
