#include <stdio.h>
#include <stdlib.h>

int main()
{
    float u,a,t,v,s;
    printf("----part a and part b--------");
    printf("\nEnter the initial velocity:");
    scanf("%f", &u);
    printf("\nEnter the acceleration:");
    scanf("%f", &a);
    printf("\nEnter the time:");
    scanf("%f", &t);
    v= u + a*t;
    s= u*t + ((a*t*t)/2);
    printf("\nThe final velocity is %.1f",v);
    printf("\nThe distance travelled is %.1f",s);





    return 0;
}
