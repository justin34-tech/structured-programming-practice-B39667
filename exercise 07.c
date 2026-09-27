#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grossPay,h,hourlyRate,emp,excessHrs;
    for (;;){
        printf("\nEnter employee number:");
        scanf("%f",&emp);
        printf("\nEnter number of hours worked:");
        if (scanf("%f",&h)!=1 || h==1){
            break;
        }

        if (h<=40){
            hourlyRate=3000;
            grossPay=h*hourlyRate;
            printf("\nYour salary is UGX%.1f",grossPay);
            printf("\n****Work for more hours to gain more****");
        }else{
            hourlyRate=3000;
            excessHrs=5000;
            grossPay=(h*hourlyRate) + excessHrs;
            printf("\nYour salary is UGX%.1f",grossPay);
            printf("\n~~~~Thank You for your service~~~~");
        }


    }
    return 0;
}
