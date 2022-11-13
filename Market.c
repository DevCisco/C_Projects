//IT: Acquisto con sconto di n litri di vino
//ENG: Buying undefined liters of wine using a 10% discount
#include <stdio.h>
main(){
    float price,capacity,discount,valuediscount,value;
    price=0.88;
    capacity=0;
    discount=0.10;
    valuediscount=0.0;
    value=0.0;
    puts("Inserire il quantitativo di vino da acquistare");
    scanf_s("%f",&capacity);
    value=capacity*price;
    if(value>=50.00){
        valuediscount=value*discount;
        value=value-valuediscount;
    }
    printf_s("Ha acquistato %.2f litri di vino. Il totale, applicando uno sconto del 10%%, corrisponde a %.2f",capacity,value);
}