// Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

int main ()
{
        int n , i , j , sum =0 ; 
        printf("Enter size of matrix : ");
        scanf("%d",&n);

        int a[n][n] ;

        printf("enter values of matrix a[] : \n");
        for(i=0 ; i<n ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j]);


        for(i=0 ; i<n ; i++)
        {
                for(j=0 ; j<n ; j++)
                {
                        if(i+j == n-1)
                        sum = sum+a[i][j] ;
                }
        }

        printf("the sum of right diagonals of a matrix is %d ", sum);

        return 0;
        
}
