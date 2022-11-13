//IT: Calcolo area del quadrato, sfera e cerchio
//ENG: Calculating the surface of a square, a sphere and a circle
#include <stdio.h>
#include <math.h>
main(){
    unsigned int choice=0;
    float pi=3.14;
    puts("1_for square");
    puts("2_for sphere");
    puts("3_for circle");
    scanf_s("%u",&choice);
    switch (choice){
    case 1:
        unsigned int side;
        unsigned int area;
        printf_s("Insert the value of the side:\t");
        scanf_s("%u",&side);
        area=pow(side,2);
        printf_s("The area is %u sqm",area);
        break;
    case 2:
        float spherearea;
        unsigned int sphereray;
        sphereray=0;
        spherearea=0;
        printf_s("Insert the value of the ray:\t");
        scanf_s("%u",&sphereray);
        spherearea=4*pi*pow(sphereray,2);
        printf_s("The area is %.2f sqm",spherearea);
        break;
    case 3:
        float circlearea;
        unsigned int circleray;
        printf_s("Insert the value of the ray:");
        scanf_s("%u",&circleray);
        circlearea=pow(circleray,2)*pi;
        printf_s("The area is %.2f sqm",circlearea);
        break;
    }
}