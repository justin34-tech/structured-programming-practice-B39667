#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if (num>0 && num<=10){
        printf("A");
    }else if(num<=20){
        printf("B");
    }else if(num<=30){
        printf("C");
    }else if(num<=40){
        printf("D");
    }else if(num<=50){
        printf("E");
    }else if(num<=60){
        printf("F");
    }else{
        printf("G");
    }


    return 0;
}
