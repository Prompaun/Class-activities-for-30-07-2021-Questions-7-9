#include <stdio.h>


void swap(int *a, int *b) {
  int k = *a;
  *a = *b;
  *b = k;
}


int partition(int array[], int start, int end) {
  
  int pivot = array[end];
  
  int i = (start - 1);

  for (int j = start; j < end; j++) {
    if (array[j] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[end]);
   
  return (i + 1);
}

void quickSort(int array[], int start, int end) {
  if (start < end) {
    
    int pi = partition(array, start, end);
    
    quickSort(array, start, pi - 1);
    
    quickSort(array, pi + 1, end);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
