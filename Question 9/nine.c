#include <stdio.h>
#include <string.h>

int main(void)
{
    char hex_digits[] = "0123456789abcdef";
    unsigned long long sh;
    int val;
    
    printf("\nPut an integer :");
    scanf("%d", &val);
    if (val < 0){   
        sh = 1ULL<<32;
        sh += val;
    }
    else{
      sh = val;
    }
    int x;
    char k[] = "0x",y[20],reverse[20];
    char d[2]="\0";
    while(sh!=0){
        x = sh & 0xf;
        d[0] = hex_digits[x];
        strcat(y,d);
        sh >>= 4;
        if (sh == 0){
            break;
        }
    }
    int p;
    p = strlen(y);
    for(int i=0;p>=0;i++){
      p--;
      reverse[i]=y[p];
    }
    strcat(k,reverse);
    printf("\nAnswer : %s\n",k);
    main();
    return(0);
}

