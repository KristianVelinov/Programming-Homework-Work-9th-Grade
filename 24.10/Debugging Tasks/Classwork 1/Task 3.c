// Файлът “sortedevenindexesproduct” съдържа програма, която намира умножението на елементите, които се намират на четни индекси (0 - не е четен индекс) след като подадения масив се сортира възходящо. Така например входен масив “{1, 9, 3, 2, 5}” след сортиране изглежда “{1, 2, 3, 5, 9} и сумата на елементите, които се намират на четни индекси е 27 = 3 * 9 (индекси 2 и 4). В програмата са допуснати няколко грешки и тя връща 0 като резултат. Използвайте инструмента да дебъгване на Visual Studio Code за да откриете и отстраните грешките.
// sortedevenindexesproduct

#include <stdio.h>

void bubblesort(int *arr, int arrlen);
int sortedevenindexesproduct(int *arr, int arrlen);

int main(void) {
  int array[5] = {1, 9, 3, 2, 5};
  int product = sortedevenindexesproduct(array, 5);
  printf("%d", product);
  return 0;
}

void bubblesort(int *arr, int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - i - 1; j++) {
      if (arr[j] > arr[j + 1]) { // i -> j
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        sorted = 0;
      }
    }
  }
}

int sortedevenindexesproduct(int *arr, int arrlen) {
  bubblesort(arr, arrlen);
  int product = 1; // 0 - > 1
  for (int i = 2; i < arrlen; i += 2) { // i = 1 -> i = 2
    product *= arr[i];
  }
  return product;
}