#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i, min, max, p1=0, p2=0,k=0;
    printf("Enter size of Array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            p1=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            p2=i;
        }
    }
    printf("\nThe largest and smallest elements are:\nlargest=%d \nsmallest=%d",max,min);
    k=a[p1];
    a[p1]=a[p2];
    a[p2]=k;
    printf("\n\nThe array after interchanging the largest and smallest elements:");
    for(i=0;i<n;i++)
    {
    printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}
