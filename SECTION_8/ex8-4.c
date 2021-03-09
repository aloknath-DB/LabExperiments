/*Write a program that finds the sum of diagonal elements of a square matrix.*/
#include<stdio.h>
void main()
{
    int m[10][10],i,j,sum=0,n;
    printf("\nEnter n for n*n square matrix  :");
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //finding sum of diagonal elements
    printf("\nThe diagonal elements of the matrix are :\n");
    for(i=0;i<n;i++)
    {
         printf("%d\t",m[i][i]);
        sum=sum+m[i][i];
    }
    printf("\nSum of diagonal elements are %d",sum);
}