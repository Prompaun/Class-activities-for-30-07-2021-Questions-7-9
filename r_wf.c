#include <stdio.h>
#include <stdlib.h>

int main() {
    int k;
    int i;

    FILE *fp;
    fp = fopen("data.txt", "wb");

    printf("Enter k: ");
    scanf("%d", &k);

    srand (k);

    for(i = 0; i<k; i = i + 1){
        fprintf(fp, "%d\n", rand() % 1000);
    }
    fclose(fp);
    return(0);
    
}
