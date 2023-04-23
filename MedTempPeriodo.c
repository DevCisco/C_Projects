//Previsione delle temperature minime, massime e medie in un certo periodo
#include <stdio.h>
#include <string.h>
main(){
    char city[100];
    int ndays,i;
    float med,mediamin,mediamax;
    mediamax=0.0;
    med=0.0;
    mediamin=0.0;
    i=0;
    ndays=0;
    puts("Inserire la città di riferimento");
    scanf_s("%s",&city);
    puts("Inserire il numero di giorni");
    scanf("%d",&ndays);//numero di giorni
    int minimum[ndays],maximum[ndays],period[ndays];//minimum contiene la temperatura minima, maximum quella massima
    for(i=0;i<ndays;i++){
        printf_s("Inserire le temperature minime del %d° giorno ",i+1);
        scanf_s("%d",&minimum[i]);
        printf_s("Inserire le temperature massime del %d° giorno ",i+1);
        scanf_s("%d",&maximum[i]);
    }
    for(i=0;i<ndays;i++){
        mediamin+=minimum[i];
        mediamax+=maximum[i];
        period[i]=(minimum[i]+maximum[i])/2;
        med+=period[i];
    }
    mediamin=mediamin/ndays;
    mediamax=mediamax/ndays;
    med=med/ndays;
    printf_s("In un arco di %d giorni, nella città di %s,potrebbero registrarsi, in media, le seguenti temperature:\n",ndays,city);
    printf_s("Temperatura minima %.1f°C\tTemperatura massima: %.1f°C\tTemperatura media: %.1f°C\n",mediamin,mediamax,med);
}