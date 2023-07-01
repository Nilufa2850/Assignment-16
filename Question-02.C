//Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>
int main ()
{
        int a[3][3] , b[3][3] , c[3][3] ;

        int i , j , k , sum ;

        printf("\nEnter values of a[][] (3x3) Matrix : ");
        for(i=0 ; i<3 ; i++)
                for(j=0 ; j<3 ; j++)
                        scanf("%d",& a[i][j]);


        printf("\nEnter values of b[][] (3x3) Matrix : ");
        for(i=0 ; i<3 ; i++)
                for(j=0 ; j<3 ; j++)
                        scanf("%d",& b[i][j]);


        printf("\nproduct of  two matrixs a[][] & b[][] are : \n");
        for(i=0 ; i<3 ; i++)
        {
                for(j=0 ; j<3 ; j++)
                {
                        sum = 0 ;
                        for(k=0 ; k<3 ; k++)
                        {
                                sum = sum + a[i][k]*b[k][j] ;
                                c[i][j] = sum ;
                        }

                        printf("%d ",c[i][j] ) ;
                }

                printf("\n");
        }
}


        
