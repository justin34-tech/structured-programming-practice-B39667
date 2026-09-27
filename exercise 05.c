#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("N\tN^2\tN^3\tN^4\n");//header of the table
    int n;
    for (n=1;n<=10;n++){//for loop
        printf("%d\t%d\t%d\t%d\n",n,n*n,n*n*n,n*n*n*n);
    }
    printf("\nN\tN^2\tN^3\tN^4\n");
    n=1;
    while (n<=10){//while loop
        printf("%d\t%d\t%d\t%d\n",n,n*n,n*n*n,n*n*n*n);
        n++;
    }
    printf("\nN\tN^2\tN^3\tN^4\n");
    n=1;
    do{//do...while
        printf("%d\t%d\t%d\t%d\n",n,n*n,n*n*n,n*n*n*n);
        n++;
    }while (n<=10);
    return 0;
}
