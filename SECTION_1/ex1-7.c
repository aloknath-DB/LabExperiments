
/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
void main(){
    int num1,num2;
	printf("Please, Enter two numbers : \n");
	scanf("%d %d",&num1,&num2);
	printf("\nBefore swapping first number = %d , second number is %d ",num1,num2);

	//swapping of two numbers
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nAfter swapping first number = %d , second number is %d ",num1,num2);
}
