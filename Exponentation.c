//IT: calcolo e stampa di una potenza
//ENG: calculation and print of an exponentation
#include <stdio.h>
main(){
    unsigned int base, esponente,cont,totale;
    cont=0;
    base=1;
    esponente=1;
    totale=1;
    puts("Inserire la base");
    scanf_s("%u",&base);
    puts("Inserire l'esponente");
    scanf_s("%u",&esponente);
    while(cont<esponente){
        totale=totale*base;
        cont++;
    }
    printf_s("%s%u","Il risultato della potenza corrisponde a: ",totale);
}