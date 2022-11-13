//IT: stampa della somma dei primi 100 numeri pari
//ENG: print of the sum of the first 100 even numbers
#include <stdio.h>
main(){
    unsigned int sum=0,x;
    for(x=2;x<=100;x+=2){
        sum+=x;
    }
    printf_s("%u\n",sum);
}