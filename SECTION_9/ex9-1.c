/*Write a program using pointers to input a 4X5 matrix and then display it.*/
#include<stdio.h>
void main()
{
    int m[4][5],i,j;
    int *ptr=m;
    printf("\nEnter elements into a 4*5 matrix :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",(ptr+i*5)+j);
        }
    }

    //printing the elements
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",*(ptr+i*5)+j);
        }
        printf("\n");
    }
}