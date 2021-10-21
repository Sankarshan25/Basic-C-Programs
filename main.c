#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++) //using only increment operators
    {
        for(j=i;j<=5;j++)
        {
            printf("*");
            //printf("%d",i);
           // printf("%d",j);
        }
        printf("\n");
    }

    printf("END\n\n");

    for(i=5;i>=1;i--) //using only decrement operators
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
            //printf("%d",i);
            //printf("%d",j);
        }
        printf("\n");
    }

    printf("END\n\n");

    for(i=1;i<=5;i++) //using increment operator in outer loop and decrement operator in inner loop
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
            //printf("%d",i);
            //printf("%d",j);
        }
        printf("\n");
    }
    printf("END\n\n");

    for(i=5;i>=1;i--) //using decrement operator in outer loop and increment operator in inner loop
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            //printf("%d",i);
            //printf("%d",j);
        }
        printf("\n");
    }
    printf("END\n\n");
    return 0;
}
