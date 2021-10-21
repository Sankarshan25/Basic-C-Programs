#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10],n,i,num;
    printf("Enter size of array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be deleted:\t");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]>=num)
        {
            a[i]=a[i+1];
        }
    }
    printf("\nThe array after deleting the number:");
    for(i=0;i<n-1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}
