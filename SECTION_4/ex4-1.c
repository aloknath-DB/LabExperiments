/*Write a program to input three numbers and find out the smallest.*/
#include<stdio.h>
void main()
{
    float smallest,n1,n2,n3;
    /*smallest is a variable that stores the smallest number, n1,n2,n3 are three numbers*/
    printf("Enter three numbers one after another : ");
    scanf("%f %f %f",&n1,&n2,&n3);

    smallest=n1;

    if(n2<smallest)
        {
            smallest=n2;
        }
    else if(n3<smallest)
        {
            smallest=n3;
        }

    printf("\nSmallest number is : %f\n",smallest);

}
