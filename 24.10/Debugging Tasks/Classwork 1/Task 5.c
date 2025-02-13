// Файлът “remdup.c” съдържа програма, която премахва повтарящите се елементи от сортиран масив, като принтира само уникалните числа. Така например за масива: {0, 0, 0, 1, 1, 2, 2, 5, 5, 7}; трябва да се принтират числата 0, 1 ,2, 5,7,  но в програмата е допусната грешка и се принтират числата: 0, 0, 0, 1, 1, 2, 2, 5, 5, 7. Използвайте инструмента да дебъгване на Visual Studio Code за да откриете и отстраните грешката.
// remdup.c

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main(void) {
  int nums[10] = {0, 0, 0, 1, 1, 2, 2, 5, 5, 7};
  int size = removeDuplicates(nums, 10);
  for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}

int removeDuplicates(int* nums, int numsSize){
    char curel = nums[0];
    int k = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > curel) { // >= stava >
            nums[k] = nums[i];
            curel = nums[k];
            k++;
        }
    }
    return k;
}

