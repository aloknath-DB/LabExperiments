/*Write a programusing pointers to read an array of integers and print its elements in reverse order*/
#include<stdio.h>
int N=10;
void main()
{
    int s[N],i;//s is an integer array of size N, N is an gloval variable
    int *ptr=s;
    printf("\nEnter %d elements into the array",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",ptr+i);
    }
    ptr=&s[N-1];
    printf("\nThe entered array in reverse order is :\n");
    for(i=0;i<N;i++)
    {
        printf("%d  ",*(ptr-i));
    }
}