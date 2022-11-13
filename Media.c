//IT: Calcolo media primi 1000 numeri naturali
//ENG: Calculating the first 1000 natural numbers average
#include <stdio.h>
main(){
    unsigned int cont,total,x;
    cont=0;
    total=0;
    x=0;
    while(x!=9999){
        puts("Inserire un valore");
        scanf_s("%u",&x);
        if(x==9999){
            break;
        }
        total+=x;
        cont++;
    }
    total=total/cont;
    printf_s("La media è: %u",total);
}