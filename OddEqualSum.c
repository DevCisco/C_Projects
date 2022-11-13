//IT: somma di tutti i numeri pari e dispari maggiori di 0
//ENG: sum of the positive even and odd numbers
#include <stdio.h>
main(){
    unsigned int x,total;
    puts("Inserire un valore, -1 per terminare");
    scanf_s("%u",&x);
    while(x!=-1){
        total+=x;
        if((total%2)==0){
            printf_s("%u%s\n",total,"-Even");
        }
        else{
            printf_s("%u%s\n",total,"-Odd");
        }
        puts("Inserire un valore, -1 per terminare");
        scanf_s("%u",&x);
    }
    puts("The program has been shutted down. Please re-execute it");
}