/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use / and % operators.]*/
#include<stdio.h>
void main(){
    int num,n,temp,sum=0;
    printf("Enter an four digit integer : ");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        sum=sum+(num%10);
        num=num/10;
    }
    printf("\nsum of digits of %d is %d",n,sum);
}
