/* Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j).*/

#include<stdio.h>
void main()
{
    int i,j,m[10][10],n;
    printf("\nEnter n for n*n(square matrix) :");
    scanf("%d",&n);
    printf("\nEnter elements in to the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(m[i][j]!=m[j][i])
            {break;}
        }
    }
    if(i==n && j==n)
    {
        printf("\nThis is a symetric matrix\n");
    }
    else
    {
        printf("\nThis is not a symetric matrix\n");   
    }

}