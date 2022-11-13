//IT: Verificare i mezzi che si possono guidare in base all'età
//ENG: Seeing the appropriate vehicle for each age
#include <stdio.h>
main(){
    unsigned int age;
    age=0;
    puts("Inserire la propria età");
    scanf_s("%u",&age);
    if(age>=14&&age<16){
        puts("Si può guidare il motorino da 50cc");
    }
    else if (age>=16&&age<18){
        puts("Si può guidare la moto fino a 125cc");
    }
    else if (age>=18&&age<21){
        puts("Si può guidare l'auto fino a 150 km/h");
    }
    else if (age>=21){
        puts("Si possono guidare le auto di tutti i tipi");
    }
}