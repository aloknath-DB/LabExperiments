/*Write a program to read ‘n’ real numbers and then insert a new real number at a given position (after insertion, the array size should increase by 1).*/
#include<stdio.h>
void main()
{
    int arr[20],i,position,size,new_num;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("Enter %d number of elements :\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nBefore entry the numbers are :\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nEnter the position where you want to add another number : ");
    scanf("%d",&position);
    printf("\nEnter the new number you want to enter : ");
    scanf("%d",&new_num);

    for(i=size;i>=position-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position-1]=new_num;
    size=size+1;

    printf("\nNow the array size is : %d",size);
    printf("\nAfter entry the numbers are :\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

}