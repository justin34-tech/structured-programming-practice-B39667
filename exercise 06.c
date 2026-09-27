#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,salesTax_state,salesTax_country,sales;
    char month[20];
    for (;;){//for loop
        printf("Enter total amount collected (-1 to quit):");
        if (scanf("%f",&total)!=1 || total== -1){
            break;
        }
        printf("\nEnter the month:");
        scanf("%19s",&month);
        sales=total/1.09;
        salesTax_state=total * 0.04;
        salesTax_country=total * 0.05;
        printf("\nThe state taxes are UGX%.1f\n",salesTax_state);
        printf("The country taxes are UGX%.1f\n",salesTax_country);
    }
    while (1){//while loop
        printf("Enter total amount collected (-1 to quit):");
        if (scanf("%f",&total)!=1){
            break;
        }
        if (total== -1){
            break;
        }
        printf("\nEnter the month:");
        scanf("%19s",&month);
        sales=total/1.09;
        salesTax_state=total * 0.04;
        salesTax_country=total * 0.05;
        printf("\nThe state taxes are UGX%.1f\n",salesTax_state);
        printf("The country taxes are UGX%.1f\n",salesTax_country);
    }

    return 0;
}
