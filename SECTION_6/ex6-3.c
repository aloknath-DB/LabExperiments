/*Write a program to read ‘n’ characters and then delete the duplicate characters.*/
#include<stdio.h>
void main()
{
    int arr[50],i,j,k,n;
    char ch,sp=' ';
    printf("Enter the number of numbers you want : ");
    scanf("%d",&n);
    printf("\nEnter the characters:");
    for(i=0;i<n;i++)
    {
        ch=getche();
        arr[i]=ch;
    }

    printf("\nEntered characters are \n");
    for(i=0;i<n;i++)
    {
        printf("%c\t",arr[i]);
        
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                     arr[k]=arr[k+1]; 
                }
                arr[n]=sp;
                n=n-1;
                j--;
            }
        }
    }

    printf("\nafter deleting characters are \n");
    for(i=0;i<n;i++)
    {
        printf("%c\t",arr[i]);
    }
}