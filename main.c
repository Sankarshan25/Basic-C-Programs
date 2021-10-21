#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
