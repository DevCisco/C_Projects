//IT: Calcolo nuovo stipendio
//ENG: Refactor of salaries due to company crisis
#include <stdio.h>
main(){
    unsigned int yearsactive;
    float discount,temp,salary;
    salary=0.0;
    yearsactive=0;
    puts("Inserire il proprio stipendio");
    scanf("%f",&salary);
    if(salary>=5000.00){
        puts("Il suo stipendio non è ridotto");
    }
    else if (salary<5000.00){
        puts("Inserire gli anni di servizio");
        scanf("%u",&yearsactive);
        if(yearsactive<10){
            discount=0.12;
            temp=salary*discount;
            salary=salary-temp;
            printf_s("Il nuovo stipendio, decurtato del 12%% è %.2f\n",salary);
        }
        else if (yearsactive>=10&&yearsactive<30){
            discount=0.08;
            temp=salary*discount;
            salary=salary-temp;
            printf_s("Il nuovo stipendio, decurtato dell'8%% è %.2f\n",salary);   
        }
        else if (yearsactive>=30){
            discount=0.04;
            temp=salary*discount;
            salary=salary-temp;
            printf_s("Il nuovo stipendio, decurtato del 4%% è %.2f\n",salary);
        }
    }
}