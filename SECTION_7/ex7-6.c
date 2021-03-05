/*
Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on the user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.
*/
#include<stdio.h>
//initializing array with values
void createArray(int size,int array[],char name)
{
    int i=0;
    printf("\nEnter %d numbers into array %c\n",size,name);
    for(i;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
}

//function to traverse array
void displayArray(int array[],int size,char name)
{
    printf("\n\nDisplaying array %c\n",name);
    int j=0;
    for(j;j<size;j++)
    {
        printf("%d\t",array[j]);
    }
}

//insert new number
int insertElement(int array[],int size,char name)
{
    displayArray(array,size,name);
    int position,i,new_num;
    printf("\n\nInserting into array %c",name);
    printf("\nEnter the position where you want to add another number : ");
    scanf("%d",&position);
    printf("\nEnter the new number you want to enter : ");
    scanf("%d",&new_num);

    for(i=size;i>=position-1;i--)
    {
        array[i]=array[i-1];
    }
    array[position-1]=new_num;
    size=size+1;
    return size;
}

//deleting an element
int deleteElement(int array[],int size,char name)
{
    displayArray(array,size,name);
    int position,i;
    printf("\n\nDeleting from array %c",name);
    printf("\nEnter the position of element which you want to delete: ");
    scanf("%d",&position);
    for(i=position;i<size;i++)
    {
        array[i-1]=array[i];
    }
    size=size-1;
    return size;
}

//search element
void searchElement(int array[],int size,char name)
{
    int s_item,i;//s_item is item to be searched
    printf("\n\nSearching from array %c",name);
    printf("\nEnter a number, you want to search :");
    scanf("%d",&s_item);

    for(i=0;i<size;i++)
    {
        if(s_item==array[i])
        {
            printf("\n%d found at %d position",s_item,i+1);
        }
    }
    if(i==size)
    {
        printf("\n%d is not present in array %c",s_item,name);
    }
}

//sorting in ascending order
void ascendSort(int array[],int size,char name)
{
    int i,j,temp;
    printf("\n\nSorting array %c in ascending order",name);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    if(i==size)
    {
        printf("\narray %c sorted",name);
    }
}

//merging A and B into C
int mergeArray(int a[],int s_a,int b[],int s_b,int c[])
{
    int i,j,k=0;
    //string from array A to C
    while(i<s_a)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    //string from array B to C
    i=0;
    while(i<s_b)
    {
        c[k]=b[i];
        i++;
        k++;
    }
    printf("\nArray C after merging is \n");
    displayArray(c,k,'C');
}

void main()
{
    int A[20],B[20],C[40],sizeA=0,sizeB=0,choice,sizeC=0;
    printf("Enter size of array A :");
    scanf("%d",&sizeA);
    createArray(sizeA,A,'A');//entering values into A by using function

    printf("Enter size of array B :");
    scanf("%d",&sizeB);
    createArray(sizeB,B,'B');//entering values into B by using function

    printf("\nEnter 1 to traverse array A\nEnter 2 to traverse array B");
    printf("\nEnter 3 to insert new number into  array A\nEnter 4 to insert new number into array B");
    printf("\nEnter 5 to delete from array A\nEnter 6 to delte from array B");
    printf("\nEnter 7 to search from array A\nEnter 8 to search from array B");
    printf("\nEnter 9 to sort array A in ascending order\nEnter 10 to sort array B in ascending order");
    printf("\nEnter 11 to merge A and B into C\n12 to traverse C");


    while (1)
    {
        printf("\n\nEnter 0 to quit OR Enter your desired choice");
        printf("\n\nEnter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 0:
                exit(0);

            case 1:
                displayArray(A,sizeA,'A');
                break;

            case 2:
                displayArray(B,sizeB,'B');
                break;

            case 3:
                sizeA=insertElement(A,sizeA,'A');
                break;

            case 4:
                sizeB=insertElement(B,sizeB,'B');
                break;

            case 5:
                sizeA=deleteElement(A,sizeA,'A');
                break;

            case 6:
                sizeB=deleteElement(B,sizeB,'B');
                break;

            case 7:
                searchElement(A,sizeA,'A');
                break;

            case 8:
                searchElement(B,sizeB,'B');
                break;

            case 9:
                ascendSort(A,sizeA,'A');
                break;

            case 10:
                ascendSort(B,sizeB,'B');
                break;

            case 11:
                mergeArray(A,sizeA,B,sizeB,C);
                break;


            default:
            printf("\nEnter a choice between 0 to 11\n");
            break;
        }
    }
}
