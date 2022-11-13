//IT: stampa della tavola pitagorica da 2 a 10
//ENG: print of the multiplication table from 2 to 10
#include <stdio.h>
main(){
    unsigned int n1,n2,cont;
    n1=1;
    while(n1<=10){
        n2=1;
        while(n2<=10){
            printf_s("%d\t",n1*n2);
            n2++;
        }
        printf_s("\n");
        n1++;
    }
}