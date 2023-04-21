//IT: stampa dell'interesse composto di un investimento iniziale di dollari 1000 per 10 anni ad un tasso annuo del 5%
//ENG: printing of interest composed of an investment of 1000 dollars for 10 years at a rate of 5%
//Modificare in modo da renderlo più generale
#include <stdio.h>
#include <math.h>
main(){
    double cash,interest,total;
    unsigned int years;
    cash=1000.00;
    interest=0.05;
    puts("Years\tTotal Amount");
    for(years=1;years<=10;years++){
        total=cash*pow(1+interest,years);
        printf_s("%d\t%.2f\n",years,total);
    }
}
