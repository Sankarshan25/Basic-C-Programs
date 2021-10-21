#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],a_rows,a_columns,b_rows,b_columns,flag,i,j,k,sum=0;
    flag:
    printf("Enter number of rows and columns of matrix A:\t");
    scanf("%d %d",&a_rows,&a_columns);
    printf("\nEnter number of rows and columns of matrix B:\t");
    scanf("%d %d",&b_rows,&b_columns);
    if(a_columns!=b_rows)
    {
        printf("\nMatrix multiplication not possible.\n");
        printf("\nNumber of columns of matrix A should be equal to number of rows of matrix B.\n\n");
        goto flag;
    }

    else
    {
       printf("\nEnter the elements of the matrix A:\n\n");

      {
        for(i=0;i<a_rows;i++)
        {
            for(j=0;j<a_columns;j++)
            {
                printf("a[%d][%d]:\t",i,j);
                scanf("%d",&a[i][j]);
            }
        }
      }

       printf("\nEnter the elements of matrix B:\n\n");

      {
        for(i=0;i<b_rows;i++)
        {
            for(j=0;j<b_columns;j++)
            {
                printf("b[%d][%d]:\t",i,j);
                scanf("%d",&b[i][j]);
            }
        }
      }

       printf("\nThe elements of the matrix A are:\n\n");

      {
        for(i=0;i<a_rows;i++)
        {
            for(j=0;j<a_columns;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
      }

      printf("\nThe elements of the matrix B are:\n\n");

      {
        for(i=0;i<b_rows;i++)
        {
            for(j=0;j<b_columns;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
      }

      //Multiplying the two matrices

      for(i=0;i<a_rows;i++)
      {
          for(j=0;j<b_columns;j++)
          {
              for(k=0;k<b_rows;k++)
              {
                  sum=sum+ a[i][k]*b[k][j];
              }
              c[i][j]=sum;
              sum=0;
          }
      }

      printf("\nThe elements of the resultant matrix C are:\n\n");

      {
        for(i=0;i<a_rows;i++)
        {
            for(j=0;j<a_columns;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
      }


    }
    return 0;
}
