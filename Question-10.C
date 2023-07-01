// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main ()
{
    int n , m , i , j , count;

    printf("Enter (m x n) : "); 
    scanf("%d%d",&m,&n);

    int A[m][n] ;

    printf("Enter values of A[]\n");

    for(i=0 ; i<m; i++)
        for(j=0 ; j<n ; j++)
            scanf("%d",&A[i][j]);


    for(i=0 ; i<m; i++)
    {  
        count = 0 ;
        for(j=0 ; j<n ; j++)
        {
            if( A[i][j] == 1)
                count ++ ;
        }
        printf("\n%dth Row - %d 1s.",i,count);
    }

    return 0 ;
}
