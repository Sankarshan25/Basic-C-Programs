#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,sum=0,c,r;
    printf("Enter a number:\t");
    scanf("%d",&num);
    c=num;
    while(c>0)
    {
        r=c%10;
        sum= sum + r*r*r;
        c=c/10;
    }

    if(num==sum)
        printf("\nThe number %d is an Armstrong Number.\n",sum);
    else
        printf("\nThe number %d is not an Armstrong Number.\n",sum);
    return 0;
}
