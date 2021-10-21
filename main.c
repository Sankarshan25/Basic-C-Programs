#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,c=0,r,sum=0,i=0;
    printf("Enter a decimal number:\t");
    scanf("%d",&num);
    c=num;
    while(c!=0)
    {
        r=c%2;
        printf("\n\nr=%d",r);
        sum=sum + r * pow(10,i);
        printf("\n\nsum=%d",sum);
        c=c/2;
        i++;
    }

    printf("\nThe binary number for %d is:\t %d",num,sum);

    return 0;
}
