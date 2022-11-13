//IT: Calcolo dei primi n numeri della sequenza di Fibonacci
//ENG: Calculating the first n numbers of Fibonacci's sequence
#include <stdio.h>
int fibonacci(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    else return fibonacci(i-1)+fibonacci(i-2);
}
main(){
    int x,f;
    f=0;
    x=0;
    puts("Inserire un numero maggiore o uguale a 0");
    scanf("%d",&x);
    f=fibonacci(x);
    printf_s("Fibonacci:%d\n",f);
}