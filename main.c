#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,num=0;
    printf("Enter size of array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be inserted:\t");
    scanf("%d",&num);
    for(i=(n-1);i>=0;i--)
    {
        if(a[i]>num)
        {
            a[i+1]=a[i];
            continue;
        }
          a[i+1]=num;
          break;
    }
    if(a[0]>num)
        a[0]=num;
    printf("\nThe arrangement of the array after inserting the number:");
    for(i=0;i<=n;i++)
    {
        printf("\n a[%d]=%d",i,a[i]);
    }
    return 0;
}
