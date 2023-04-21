//IT: Conversione della temperatura da Celsius a Kelvin e Fahrenheit
//ENG: Converting a temperature from Celsius to Kelvin and Fahrenheit
//Modificare con tutte le unità di misura(Litri, Peso,ecc.)
#include <stdio.h>
float Fahrenheit(float temp){
    temp=temp*9/5+32;
    return temp;
}
float Kelvin(float temp){
    temp=temp+273.15;
    return temp;
}
main(){
    float temp,fahrenheit,kelvin;
    temp=0.0;
    fahrenheit=0.0;
    kelvin=0.0;
    puts("Inserire la temperatura in gradi Celsius");
    scanf_s("%f",&temp);
    fahrenheit=Fahrenheit(temp);
    printf_s("%.2f°C equivalgono a %.2f°F\n",temp,fahrenheit);
    kelvin=Kelvin(temp);
    printf_s("%.2f°C equivalgono a %.2f°K\n",temp,kelvin);
}
