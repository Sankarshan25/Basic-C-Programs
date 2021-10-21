#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num,sum=0,c,r,i=0;
    printf("Enter a binary number:\t");
    scanf("%d",&num);
    c=num;
    while(c!=0)
    {
        r=c%10;
        sum=sum + r * pow(2,i);
        c=c/10;
        i++;
    }

    printf("\nThe decimal equivalent of the binary no. %d is:\t%d",num,sum);
    return 0;
}
