//IT: verifica se un numero è pari o dispari
//ENG: verifying if a number is even or odd
#include <stdio.h>
main(){
    int x;
    puts("Insert your number here:");
    scanf_s("%d",&x);
    if((x%2)==0){
        puts("Equal Number");
    }
    else{
        puts("Odd number");
    }
}