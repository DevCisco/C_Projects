//IT: Somma primi 100 numeri pari
//ENG: Sum of first even 100 numbers
#include <stdio.h>
main(){
    unsigned int x,total;
    x=1;
    total=0;
    do{
        total+=x;
        x+=2;
    }while(x<=99);
    printf_s("%u",total);
}