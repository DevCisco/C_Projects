//IT: Calcolo temperature massime e minime in un dato periodo
//ENG: Calculating the average temperatures in a certain period
#include <stdio.h>
float media(int min,int max){//calcolo del valore medio delle temperature
    float medium;
    medium=min+max;
    medium=medium/2;
    return medium;
}
main(){
    int ndays,i;
    float med;
    i=0;
    ndays=0;
    puts("Inserire il numero di giorni");
    scanf("%d",&ndays);//numero di giorni
    int minimum[ndays],maximum[ndays];//minimum contiene la temperatura minima, maximum quella massima
    for(i=0;i<ndays;i++){
        printf_s("Inserire le temperature minime del %d° giorno ",i+1);
        scanf_s("%d",&minimum[i]);
        printf_s("Inserire le temperature massime del %d° giorno ",i+1);
        scanf_s("%d",&maximum[i]);
    }
    for(i=0;i<ndays;i++){
        med=media(minimum[i],maximum[i]);
        printf_s("Giorno %d Massima: %d°C Minima: %d°C Media: %.1f°C\n",i+1,maximum[i],minimum[i],med);
    }
}