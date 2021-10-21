#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,columns,i,j,flag=1;
    printf("Enter number of rows:\t");
    scanf("%d",&rows);
    printf("\nEnter number of columns:\t");
    scanf("%d",&columns);
    printf("\nEnter the elements of the matrix:");
    int a[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("\n\na[%d][%d]:\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe elements of the matrix are:\n\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //checking unit matrix
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
           if (i==j && a[i][j]!=1)
            {
                 printf("\nThe matrix is not a unit matrix.");
                flag=0;
                break;
            }

              else if(i!=j && a[i][j]!=0)
              {
                   printf("\nThe matrix is not a unit matrix.");
                  flag=0;
                  break;
              }
        }
              if(flag==0)
              {
                break;
              }


    }
    if(flag==1)
        printf("\nThe matrix is a unit matrix.");

    return 0;
}
