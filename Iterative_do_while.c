//IT: stampa dei primi 100 numeri usando il ciclo do-while
//ENG: Print of first 100 numbers using do-while cycle
#include <stdio.h>
main(){
   unsigned int i=1;
    do{
        i++;
        printf_s("%u\n",i);
    }while(i<100);
}