#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,r;
    printf("Enter a number:\t");
    scanf("%d",&num);

    //Reversing the number
    while(num!=0)
    {
        r=num%10;
        rev=rev*10 + r;
        num=num/10;

    }

    printf("The reversed number is %d.\n\n",rev);
    return 0;
}
