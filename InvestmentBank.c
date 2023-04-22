//IT: stima dell'interesse composto di un investimento finanziario senza ulteriori aggiunte al capitale iniziale
//ENG: estimation of the compound interest of a financial investment without increasing the initial financial capital
#include <stdio.h>
#include <math.h>
main(){
    float total,interest;
    total=0.0;
    int years,cash,x;
    puts("Inserire la quantità di denaro investita");
    scanf_s("%d",&cash);
    puts("Inserire il tasso annuo");
    scanf("%f",&interest);
    interest=interest/100;
    puts("Inserire il numero di anni dell'investimento");
    scanf_s("%d",&years);
    puts("Years\tTotal Amount");
    for(x=1;x<=years;x++){
        total=cash*pow(1+interest,x);
        printf_s("%d\t%.2f\n",x,total);
        printf_s("Interesse:%.2f\n",interest);
    }
}