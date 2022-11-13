//IT: Stampa di 3 righe da 5 numeri ciascuna
//ENG: Print first 20 numbers on 3 lines, each with 5 numbers
#include <stdio.h>
main(){
    unsigned int x=1;
    while(x<=20){
        printf_s("%u\t",x);
        x++;
        if(x==6||x==11||x==16){
            puts("");
        }
    }
}