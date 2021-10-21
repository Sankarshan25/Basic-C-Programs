#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++) //pattern using increment operator
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=1;i<=5;i++) //pattern using increment operator and print j values
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=1;i<=5;i++) //pattern using increment operator and print i values
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=5;i>=1;i--) //pattern using decrement operator
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=5;i>=1;i--) //pattern using increment operator and print j values
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=5;i>=1;i--) //pattern using increment operator and print i values
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",i);
        }
         printf("\n");
    }

    printf("END\n\n");

    for(i=1;i<=5;i++) //using increment operator in outer loop and decrement in inner loop
    {
        for(j=i ;j>=1 ;j--)
        {
            printf("*");
            //printf("%d",i);
            //printf("%d",j);
        }
        printf("\n");
    }

     printf("END\n\n");

     for(i=5;i>=1;i--) //using decrement operator in outer loop and increment in inner loop
    {
        for(j=i ;j<=5 ;j++)
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
