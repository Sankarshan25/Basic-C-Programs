#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, n, small,pos;
    printf("Enter size of array:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d] element of array:\t",i);
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
    printf("\nThe smallest element in the array is:\t %d",small);
    printf("\nThe position of the smallest element in the array is:\t %d",pos);
    return 0;
}
