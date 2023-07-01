// Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main ()
{
        int n,i,j;
        printf("Enter size of sqr matrix : ");
        scanf("%d",&n);

        int a[n][n] ;

        printf("Enter values of matrix a[][] :\n");
        for(i=0 ; i<n ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j]);


        for(i=0 ; i<n ; i++)
                for(j=0 ; j<n ; j++)
                        if( j>i )
                                a[i][j ]= 0 ;


        printf("Upper Triangle : \n");
        for(i=0 ; i<n ; i++)
        {
                for(j=0 ; j<n ; j++)
                        printf("%d ",a[i][j]);

                printf("\n");
        }

        return 0;

}
