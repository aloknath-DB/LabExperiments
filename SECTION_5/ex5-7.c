/* Write a program to input a number and check whether it is palindrome or not
(a palindrome number is a number that remains the same
when its digits are reversed e.g. 16461).*/
#include<stdio.h>

void main(){
    int n, number, r_number=0;
    printf("Entar a number : \n");
    scanf("%d",&n);
    number=n;
    while(n!=0)
    {
        r_number=r_number*10 + (n%10);
        n=n/10;
    }
    

    if(number == r_number)
    {
        printf("\n\n%d Is A Pallndromic Number\n\n",number);
    }
    else
    {
        printf("\n\n%d Is Not A Pallndromic Number\n\n",number);
    }
}
