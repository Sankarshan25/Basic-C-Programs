#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");

        }
        for(l=1;l<=i-1;l++)
        {
           printf("*");

        }
        printf("\n");
    }

    printf("END\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);

        }
        for(l=i-1;l>=1;l--)
        {
           printf("%d",l);

        }
        printf("\n");
    }

    printf("END\n\n");

    return 0;
}
