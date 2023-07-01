// Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>
int main()
{
        int m,n,i,j,sum_row,sum_clm;

        printf("Enter rows & column no : ");
        scanf("%d%d",&m,&n);

        int a[m][n] ;

        printf("Enter values of a[] : \n");
        for(i=0 ; i<m ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j]);

        
        for(i=0 ; i<m ; i++)
        {
                sum_row = 0 ;
                for(j=0 ; j<n ; j++)
                {
                        sum_row = sum_row + a[i][j] ;
                }
                printf("\nSum of %d row is %d",i,sum_row);
        }

        for(i=0 ; i<m ; i++)
        {
                sum_clm = 0 ;
                for(j=0 ; j<n ; j++)
                {
                        sum_clm = sum_clm + a[j][i] ;
                }
                printf("\nSum of %d column is %d",i,sum_clm);
        }
}
