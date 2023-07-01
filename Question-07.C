// Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>

int main ()
{
        int n,i,j ;

        printf("Enter size ( n x n ) : ");
        scanf("%d",&n);

        int a[n][n] ;

        printf("Enter values of a[] :\n");
        for(i=0 ; i<n ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j] );


        for(i=0 ; i<n ; i++)
        {
                for(j=0 ; j<n ; j++)
                {
                        if(i > j)
                                a[i][j] = 0 ;
                }
        }


        printf("the lower triangular :\n");
        for(i=0 ; i<n ; i++)
        {
                for(j=0 ; j<n ; j++)
                        printf("%d ",a[i][j]);

                printf("\n");

        }

        return 0 ;

}
