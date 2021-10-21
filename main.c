#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year:\t");
    scanf("%d",&year);
    if(year%400==0)
        printf("\nThe year is a Leap Year.");
    else
        printf("\nThe year is not a Leap Year.");
    return 0;
}
