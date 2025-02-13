// 2-print odd numbers from 2 double array.c

#include <stdio.h>

int main() {

  int arr[2][3] = {{1, 7, 6}, {5, 2, 3}};

  for (int i = 0; i < 2; i++) { // 3 -> 2
    for (int j = 0; j < 3; j++) { // 2 -> 3
      if (arr[i][j] % 2 == 1) {
        printf("%d ", arr[i][j]);
      }
    }
  }

  return 0;
}