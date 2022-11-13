//IT: Calcolo del fattoriale con iterazione
//ENG: Calculating the factorial using iterative cycle
#include <stdio.h>
main(){
    unsigned int x,i,total;
    total=1;
    do{
        puts("Insert value between 1 and 17");
        scanf_s("%u",&x);
        if(x>=18){
            puts("This value can expose you to attacks due to overflow,please try again");
        }
    }while(x>=18);
    puts("X\tFactorial");
    for(i=1;i<=x;i++){
        total=total*i;
        printf_s("%u\t%u\n",i,total);
    }
}