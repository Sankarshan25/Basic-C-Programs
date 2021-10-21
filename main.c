#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,j, pos,num;
    printf("Enter size of Array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be inserted in the array:\t");
    scanf("%d",&num);
    printf("\nEnter the location where the number is to be inserted:\t");
    scanf("%d",&pos);
    for(i=(n-1);i>=pos;i--)
    {
        a[i+1]=a[i];

    }
    a[pos]=num;
    printf("\nArrangement of Array after inserting a number:\t");
    for(j=0;j<=n;j++)
    {
        printf("%d",a[j]);
        printf(" ");
    }
    return 0;
}
