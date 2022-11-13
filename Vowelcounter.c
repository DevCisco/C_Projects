//IT: Numero di vocali presenti in una stringa
//ENG: Counting the vowels in a string
#include <stdio.h>
#include <string.h>
int counter(int xi,char x){
    switch (x){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        xi++;
        break;
    }
    return xi;
}
main(){
    int x,i,cont;
    puts("Inserire la lunghezza della stringa");
    scanf_s("%d",&x);
    char string[x];
    char xs;
    puts("Inserire la stringa\nN.B. Le lettere eccedenti la dimensione massima della stringa non saranno conteggiate.");
    scanf_s("%s",&string);
    printf("La stringa iniziale è: %s\n",string);
    string[x]='\0';
    for(i=0;i<x-1;i++){
        xs=string[i];
        cont=counter(cont,xs);
    }
    printf_s("La stringa %s ha %d vocali\n",string,cont);
}