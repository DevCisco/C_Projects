//IT: Conversione delle lettere minuscole in maiuscole. Funzione presente nella libreria
//ENG: Conversion of lowercase letters to uppercase letters
#include <stdio.h>
#include <string.h>
#include "Stringconversion.h"
main(){
    int x,i;
    puts("Inserire la lunghezza della stringa");
    scanf_s("%d",&x);
    char string[x];
    char xs;
    puts("Inserire la stringa");
    scanf_s("%s",&string);
    printf("La stringa iniziale è: %s\n",string);
    string[x]='\0';
    for(i=0;i<x-1;i++){
        xs=string[i];
        string[i]=convert(xs);
    }
    printf_s("La stringa finale è: %s\n",string);
}