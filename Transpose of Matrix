#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,rows=0,columns=0,temp=0;
    printf("Enter no of rows:\t ");
    scanf("%d",&rows);
    printf("\nEnter no of columns:\t");
    scanf("%d",&columns);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("\nEnter a[%d][%d] element of matrix:\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe elements of the matrix are:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //trasnposing

    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i<j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }

     printf("\nThe elements of the matrix after transposing are:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
