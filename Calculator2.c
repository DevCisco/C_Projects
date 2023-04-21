//IT: Calcolatrice classica e stampa dei risultati delle 4 operazioni
//ENG: Classic calculator using the 4 operators and with print of their results

#include <stdio.h>
main(){
    int n1,n2,sum,minus,factory,division;
    unsigned int choice;
    do{
        puts("1_Sum");
        puts("2_Difference");
        puts("3_Product");
        puts("4_Quotient");
        puts("Insert your choice");
        scanf_s("%u",&choice);
        switch (choice){
        case 1:
            puts("Insert the first number");
            scanf_s("%d",&n1);
            puts("Insert the second number");
            scanf_s("%d",&n2);
            sum=n1+n2;
            printf_s("The sum is: %d\n",sum);
            break;
        case 2:
            puts("Insert the first number");
            scanf_s("%d",&n1);
            puts("Insert the second number");
            scanf_s("%d",&n2);
            minus=n1-n2;
            printf_s("The difference is: %d\n",minus);
            break;
        case 3:
            puts("Insert the first number");
            scanf_s("%d",&n1);
            puts("Insert the second number");
            scanf_s("%d",&n2);
            factory=n1*n2;
            printf_s("The product is: %d\n",factory);
            break;
        case 4:
            puts("Insert the first number");
            scanf_s("%d",&n1);
            puts("Insert the second number");
            scanf_s("%d",&n2);
            division=n1/n2;
            printf_s("The quotient is: %d\n",division);
            break;
        }
        puts("Do you want to do another operation with different numbers?\n5 to confirm\n6 to exit");
        scanf_s("%u",&choice);
    } while (choice==5);
    puts("Thanks for using this calculator, bye");
}
