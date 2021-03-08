/*Write a program to input ‘n’ numbers and print the 2ndlargest and 2ndsmallest number.*/
#include<stdio.h>
void main()
{
    int arr[100],i,j,n,temp;
    printf("Enter the number of characters you want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }

    //sorting the array in descending order, so that we can find our 2ndlargest and 2nd smallest easily
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    printf("\n\nThe second smallest number is %d",arr[n-2]);
    printf("\n\nThe second largest number is %d",arr[1]);
}