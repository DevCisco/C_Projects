//IT: Numero presente più volte
//ENG: Most present number
#include <stdio.h>
main(){
    int vet[10],attuale,maggiore,nvmaggiore,nvolteattuale,j,i,x;
    puts("Inserire 10 numeri");
    for(i=0;i<10;i++){
        scanf_s("%d",&vet[i]);
    }
    maggiore=vet[0];
    nvmaggiore=1;
    for(i=0;i<10;i++){
        attuale=vet[i];
        nvolteattuale=1;
        for(j=i+1;j<10;j++){
            if(vet[i]==vet[j]){
                nvolteattuale++;
            }
            if (nvolteattuale>nvmaggiore){
                maggiore=attuale;
                nvmaggiore=nvolteattuale;
            }   
        }
    }
    printf("Il numero che compare più volte è: %d, per un totale di %d volte",maggiore,nvmaggiore);
}