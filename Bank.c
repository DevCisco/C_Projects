//IT: Verifica saldo iniziale, totale addebiti ed accrediti, limite creditizio e suo superamento
//ENG: verifying of initial bank balance, total charges and credits, credit limit and its possible exceedance
//Modificare con Menu
#include <stdio.h>
main(){
    int saldo,addebito,credito,limite;
    puts("Inserire il saldo iniziale del conto");
    scanf_s("%d",&saldo);
    puts("Inserire il totale degli addebiti mensili");
    scanf_s("%d",&addebito);
    puts("Inserire il totale dei crediti mensili");
    scanf_s("%d",&credito);
    puts("Inserire il limite credito saldo");
    scanf_s("%d",&limite);
    saldo=saldo+addebito-credito;
    printf("%s%d\n","Limite:",limite);
    printf("%s%d\n","Saldo:",saldo);
    if(saldo>limite){
        puts("Limite credito superato");
    }
    else{
        puts("Limite credito non superato");
    }
}
