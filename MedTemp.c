//IT: Calcolo temperature massime e minime in un dato periodo
//ENG: Calculating the average temperatures in a certain period
#include <stdio.h>
float medium(int min,int max){
    float med=0.0;
    med=min+max;
    med=med/2;
    return med;
}
main(){
    int ndays,i;
    float med;
    i=0;
    ndays=0;
    puts("Inserire il numero di giorni");
    scanf("%d",&ndays);
    int minimum[ndays],maximum[ndays];
    puts("Inserire le temperature minime e massime");
    for(i=0;i<ndays;i++){
        scanf_s("%d",&minimum[i]);
        scanf_s("%d",&maximum[i]);
    }
    for(i=0;i<ndays;i++){
        med=medium(minimum[i],maximum[i]);
        printf_s("The medium temperature for Day %d equals to %.1f°C\n",i+1,med);
    }
}