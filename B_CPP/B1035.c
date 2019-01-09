#include<stdio.h>


int main(){
  int school[100010] = {0};
  int n;
  scanf("%d", &n);
  int number;
  int score;
  int numberLimit = 0;
  int numberMax = 1;
  int scoreMax = -1;

  // read n lines
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &number, &score);
    getchar();
    school[number] += score;
    if (number > numberLimit) {
      numberLimit = number;
    }
  }


  for (int i = 0; i <= numberLimit; i++) {
    if (school[i] > scoreMax) {
      scoreMax = school[i];
      numberMax = i;
    }
  }
  printf("%d %d\n", numberMax, scoreMax);

}
