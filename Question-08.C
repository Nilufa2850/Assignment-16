// Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main ()
{
        int m,n,i,j;
        printf("Enter (m x n) : ");
        scanf("%d%d",&m,&n);

        int a[m][n] ;

        printf("Enter values of matrix a[][] :\n");
        for(i=0 ; i<m ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j]);


        for(i=0 ; i<m ; i++)
                for(j=0 ; j<n ; j++)
                        if( i < j )
                                a[i][j ]= 0 ;


        printf("Upper Triangle : \n");
        for(i=0 ; i<m ; i++)
        {
                for(j=0 ; j<n ; j++)
                        printf("%d ",a[i][j]);

                printf("\n");
        }

        return 0;

}
