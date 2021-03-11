/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix. e.g. 
            5   7   9   6                                               5   7   9   6
matrix:     2   4   3   1                upper triangular matrix:           4   3   1
            3   5   7   9                                                       7   9
            8   6   9   7                                                           7

*/
#include<stdio.h>
void main()
{
    int r,c,i,j,m[10][10];
    printf("\nEnter number of rows of matrix  :");
    scanf("%d",&r);
    printf("\nEnter number of columns of matrix  :");
    scanf("%d",&c);
    printf("\nEnter elements in to the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //printing upper triangular matrix
    printf("\nThe upper triangular matrix is as follows\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {
                printf("%d\t",m[i][j]);
                
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}