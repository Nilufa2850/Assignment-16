// Write a program in C to accept a matrix and determine whether it is a sparse matrix.


#include<stdio.h>
int main ()
{
    int m, n, i, j, zero = 0, non_zero = 0 ;

    printf("Enter (m x n) : ");
    scanf("%d%d",&m,&n);

    int A[m][n] ;

    printf("Enter values os matrix A : \n");
    for(i=0 ; i<m ; i++)
        for(j=0 ; j<n ; j++)
            scanf("%d",&A[i][j]);


    for(i=0 ; i<m ;i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if( A[i][j] == 0 )
                zero ++ ;

            else 
                non_zero ++ ;
        }
    }


    if( zero > non_zero )
        printf("It's a Sparse Matrix - as %d no's of Zero (0) & %d no's of Non zero.",zero , non_zero);

    else 
        printf("It's NOT Sparse Matrix - as %d no's of Zero (0) & %d no's of Non zero.",zero , non_zero);


    return 0;

}



/* Sparse Matrix : A matrix which contains very few non zero elements.

    EXAMPLE :   0 5 0
                0 0 1
                0 0 0  

*/ 


