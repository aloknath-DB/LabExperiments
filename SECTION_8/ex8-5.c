/* Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on the user’s choice.
1. A + B         2. A - B       3. B - A           4. A × B
*/
#include<stdio.h>
void display(int m[][10],int a,int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int A[10][10],ar,ac,B[10][10],br,bc,R[10][10],i,j,k;
    printf("Enter order of A :");
    scanf("%d %d",&ar,&ac);
    printf("\ninsert elements into A\n");
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter order of B :");
    scanf("%d %d",&br,&bc);
    printf("\ninsert elements into B\n");
    for(i=0;i<br;i++)
    {
        for(j=0;j<bc;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nMatrix A is\n");
    display(A,ar,ac);

    printf("\nMatrix B is\n");
    display(B,br,bc);

    if(ar==br && ac==bc)
    {
        printf("\nA + B is\n");
        for(i=0;i<ar;i++)
        {
            for(j=0;j<ac;j++)
            {
                R[i][j]=A[i][j] + B[i][j];
            }
        }
        display(R,ar,ac);

        printf("\nA - B is\n");
        for(i=0;i<ar;i++)
        {
            for(j=0;j<ac;j++)
            {
                R[i][j]=A[i][j] - B[i][j];
            }
        }
        display(R,ar,ac);

        printf("\nB - A is\n");
        for(i=0;i<ar;i++)
        {
            for(j=0;j<ac;j++)
            {
                R[i][j]=B[i][j] - A[i][j];
            }
        }
        display(R,ar,ac);
    }
    else
    {
        printf("\nAddition and Subtraction is not possible as order of A is not equal to order of B");
    }

    if(ac == br)
    {
        for(i=0;i<ar;i++)
        {
            for(j=0;j<bc;j++)
            {
                R[i][j]=0;
                for(k=0;k<ac;k++)
                {
                    R[i][j] = R[i][j] + ( A[i][k] * B[k][j] );
                }
            }
        }
        printf("\nA * B is\n");
        display(R,ar,bc);
    }
    else
    {
        printf("\nRows of A is not equal to Rows of B hence multiplication is not possible");
    }
}