//IT: Calcolatrice classica e stampa dei risultati delle 4 operazioni
//ENG: Classic calculator using the 4 operators and with print of their results
#include <stdio.h>
main(){
    int n1,n2,sum,minus,factory,division,modular;
    puts("Insert the first number");
    scanf_s("%d",&n1);
    puts("Insert the second number");
    scanf_s("%d",&n2);
    sum=n1+n2;
    minus=n1-n2;
    factory=n1*n2;
    division=n1/n2;
    modular=n1%n2;
    printf_s("The sum is: %d\n",sum);
    printf_s("The difference is: %d\n",minus);
    printf_s("The product is: %d\n",factory);
    printf_s("The quotient is: %d\n",division);
    printf_s("The remainder is: %d\n",modular);
}