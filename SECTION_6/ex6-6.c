/*Write a program to find out the HCF and LCM of two numbers.*/
#include<stdio.h>
void main()
{
    int gcd,lcm,i,x,y,l,s;
    /*i is the iteration variable, x and y are two numbers, l is largest and s is smallest among them*/
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    l=(x>y)?x:y;
    s=(x<y)?x:y;
    //GCD
    for(i=s;(x%i!=0)||(y%i!=0);i--);
    gcd=i;
    printf("\nThe GCD is %d",gcd);
    //LCM
    for(i=l;(i%x!=0)||(i%y!=0);i++);
    lcm=i;
    printf("\nThe LCM is %d",lcm);
}
