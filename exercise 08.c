#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer = 534;
    int num;
    printf("\nI have a number between 1 and 1000.");
    printf("\n Can you guess my number??");
    for(;;) {
        printf("\nPlease type your first guess.");
        scanf("%d",&num);
        if (num<1 || num>1000){
            printf("Invalid number!!!\nPlease enter a number between 1 and 1000.");
        }else if (num<answer){
        printf("Too low. Try again.");
        }else if (num>answer){
        printf("Too high. Try again.");
        }else{
        printf("Excellent! You guessed the number!");
        break;
        }
    }
    return 0;
}
