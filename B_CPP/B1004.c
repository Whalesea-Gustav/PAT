#include<stdio.h>
#include<string.h>

int main() {
  int n;
  scanf("%d", &n);

  char name[100];
  char studentID[100];
  int score = 0;
  int maxScore = 0;
  int minScore = 100;
  char nameMax[100];
  char nameMin[100];
  char IDMax[100];
  char IDMin[100];

  for (int i = 0; i < n; i++) {
    scanf("%s %s %d", name, studentID, &score);
    getchar();

    if (score > maxScore) {
      maxScore = score;
      sprintf(name, "%s", nameMax);
      sprintf(studentID, "%s", IDMax);
    }

    if (score < minScore) {
        minScore = score;
        sprintf(name, "%s", nameMin);
        sprintf(studentID, "%s", IDMin);
      }
    }

  printf("%s %s\n", nameMax, IDMax);
  printf("%s %s\n", nameMin, IDMin);

  return 0;
}
