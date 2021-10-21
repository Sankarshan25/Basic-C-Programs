#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,pos;
    printf("Enter size of array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the position from which the number is to be deleted:\t");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nThe array after deleting the element:");
    for(i=0;i<n-1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}
