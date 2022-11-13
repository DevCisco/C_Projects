//IT: Verifica overflow di una variabile di tipo int
//ENG: verifying the overflow of an int variable
#include <stdio.h>
main(){
    int x,i;
    x=2147483642;
    for(i=1;i<=10;i++){
        printf_s("%d\n",x+i);
    }
}