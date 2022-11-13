//IT: Calcolo del valore assoluto di un numero
//ENG: Calculating the absolute value of a number
#include <stdio.h>
void valass(int x){
    int z;
    z=x;
    if(x<0){
        x=x*(-1);
        printf_s("Il valore assoluto di %d è: %d",z,x);
    }
    else{
        printf("Il valore assoluto di %d è: %d",z,x);
    }
}
main(){
    int x;
    puts("Inserire un valore");
    scanf_s("%d",&x);
    valass(x);
}