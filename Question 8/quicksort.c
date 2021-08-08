
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "qsort.c"


int main() {
    
    FILE *fr, *fw;
    char num[5];
    int count = 0;

    fr  = fopen ("data.txt", "r");
    

    while (!feof(fr)){
        fscanf(fr, "%s", &num);
        count++ ;
    }
    fclose(fr);

    int arr[count],a=0;
    fr  = fopen ("data.txt", "r");

    while (!feof(fr)){
        fscanf(fr, "%s", &num);
        arr[a] = atoi(num);
        a++ ;
    }

quickSort(arr, 0, count-1);

    fw = fopen("data_sorted.txt", "w");
    for(int i=0; i < count-1; i++){
          fprintf(fw, "%d\n", arr[i]);
    }
    
    fclose(fr);
    fclose(fw);
    return(0);
    
}