/*: Write a program to read ‘n’ numbers and then find the frequency of occurrence of each
number.*/
#include<stdio.h>
void main()
{
    int arr[20],i,j,count=0,size;
    printf("\nEnter size of array : ");
    scanf("%d",&size);

    printf("\nEnter %d elements",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        count=0;
        for (j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(i!=j)
                {
                    arr[j]=' ';
                }
            }
        }
        if(arr[i]!=' ')
        {
            printf("\n%d is present %d times",arr[i],count);
        }
    }
}
