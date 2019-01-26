#include <stdio.h>

int main() {
 int num;
 scanf("%d", &num);
 int numArr[4];
 void setArr(int num, int arr[]);
 int getArr(int arr[]);
 int isSame(int arr[]);
 void ascendSort(int arr[]);
 void descendSort(int arr[]);

  setArr(num, numArr);


 do {
   if (isSame(numArr)) {
     printf("%4d - %4d = 0000", num, num);
     return 0;
   }
   descendSort(numArr);
   int subtrahend = getArr(numArr);
   ascendSort(numArr);
   int subtractor = getArr(numArr);
   int result = subtrahend - subtractor;
   printf("%04d - %04d = %04d\n", subtrahend, subtractor, result);
   setArr(result, numArr);
 } while (getArr(numArr) != 6174);

}

void setArr(int num, int arr[]) {
  arr[0] = num / 1000;
  arr[1] = num % 1000 / 100;
  arr[2] = num % 100 / 10;
  arr[3] = num % 10;
}

int getArr(int arr[]) {
    return 1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3];
}

int isSame(int arr[]) {
  return arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3];
}

void descendSort(int arr[]) {
  // selecting sort
  for (int i = 0; i < 4; i++) {
    int maxPos = i;
    int max = arr[i];
    for (int j = i + 1; j < 4; j++) {
      if (arr[j] > max) {
        maxPos = j;
        max = arr[j];
      }
    }
    // exchange
    int temp = arr[i];
    arr[i] = max;
    arr[maxPos] = temp;
  }
}

void ascendSort(int arr[]) {
  // inseting sort
  for (int i = 0; i < 4; i++) {
    for (int j = i; j > 0 && arr[j] < arr[j-1]; j--) {
      //exchange arr[j], arr[j-1]
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
    }
  }
}
