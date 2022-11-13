//IT: Media altezza delle persone, calcolo persone più basse di 1,65 m e più alte di 1,80 m 
//ENG: Average height of people, people short than 1,65 m and tall than 1,80 m
#include <stdio.h>
int mediumheight(int n, int height[]){
    int medheight,i;
    i=0;
    medheight=0;
    while(i<n){
        medheight+=height[i];
        i++;
    }
    medheight=medheight/n;
    return medheight;
}
 int heightupvalue(int height[],int n){
    int x,totalup,val;
    val=180;
    x=0;
    totalup=0;
    for(x=0;x<n;x++){
        if(height[x]>=val){
            totalup++;
        }
    }
    return totalup;
}
int heightlowvalue(int height[],int n){
    int x,totallow,val;
    val=165;
    x=0;
    totallow=0;
    for(x=0;x<n;x++){
        if(height[x]<=val){
            totallow++;
        }
    }
    return totallow;
}
main(){
    int npeople,i,higherheight,lowerheight;
    i=0;
    npeople=0;
    float medheight=0.0;
    puts("Insert the number of people of the survey");
    scanf("%d",&npeople);
    printf("People=%d\n",npeople);
    int height[npeople];
    puts("Insert the height of the people");
    for(i=0;i<npeople;i++){
        scanf_s("%d",&height[i]);
    }
    medheight=mediumheight(npeople,height);
    higherheight=heightupvalue(height,npeople);
    lowerheight=heightlowvalue(height,npeople);
    medheight=medheight/100;
    printf_s("The medium height is %.2f meters\n",medheight);
    if(higherheight==1){
        printf_s("The number of person tall than 1.80 meters is %d\n",higherheight);
    }
    else{
        printf_s("The people tall than 1.80 meters are %d\n",higherheight);
    }
    if(lowerheight==1){
        printf_s("The number of person short than 1.65 meters is %d\n",lowerheight);
    }
    else{
        printf_s("The people short than 1.65 meters are %d\n",lowerheight);
    }
}