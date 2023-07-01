/*Write a program to calculate the sum of two matrices each of order 3x3.*/

#include<stdio.h>

int main()
{
        int a[3][3] , b[3][3] ;
        int i , j ;
        int sum = 0 ; 

        printf("Enter values of matrix a[][] (3x3) : ");
        for(i=0 ; i<=2 ; i++)
                for(j=0 ; j<=2 ; j++)
                        scanf("%d",&a[i][j]);
                

        printf("\nEnter values of matrix b[][] (3x3) : ");
        for(i=0 ; i<=2 ; i++)
                for(j=0 ; j<=2 ; j++)
                        scanf("%d",&b[i][j]);
       

        printf("\nSum of two matrix is : \n");
        for(i=0 ; i<=2 ; i++)
        {
                for (j = 0 ; j<=2 ; j++)
                {
                        sum = a[i][j] + b[i][j] ;

                        printf("%d ",sum);
                }
                printf("\n");
        }

        return 0;   

}
