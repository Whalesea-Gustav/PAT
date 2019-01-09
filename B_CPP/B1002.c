#include<stdio.h>
#include<string.h>

int main() {
  int sum;

  scanf("%d", &sum);

  char str[100];

  sprintf(str, "%d", sum);

  char *pinyins[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    printf("%s", pinyins[str[i] - '0']);
  }
}
