#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10],b[10],n,i,j;
    printf("Enter size of array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    printf("\nThe reverse of original array is:");
    for(j=0;j<n;j++)
        printf("\nb[%d]=%d",j,b[j]);
    return 0;
}
