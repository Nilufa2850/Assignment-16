//Write a program in C to find the transpose of a given matrix.

#include<stdio.h>
int main ()
{
        int n , m , i , j ;
        printf("Row (m) & cloumn (n) size of a[][] :");
        scanf("%d%d",&m,&n);


        int a[m][n] ;

        printf("\nEnter values of a[][]: \n");
        for(i=0 ; i<m ; i++)
                for(j=0 ; j<n ; j++)
                        scanf("%d",&a[i][j]);


        printf("\nTranspose Matrix of a[][] :\n");
        for(j=0 ; j<n ; j++)
        {
                for(i=0 ; i<m ; i++)
                        printf("%d ",a[i][j]);

                printf("\n");
        }
}
