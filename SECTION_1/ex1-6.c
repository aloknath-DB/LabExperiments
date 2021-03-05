/*write a program to swap two numbers*/
#include<stdio.h>
int main(){
	int num1,num2,temp;
	printf("Please, Enter two numbers : \n");
	scanf("%d %d",&num1,&num2);
	printf("Before swapping first number = %d , second number is %d ",num1,num2);
	
	//swapping of two numbers
	temp=num1;
	num1=num2;
	num2=temp;
	//swapping complete
	
	printf("\nAfter swapping first number = %d , second number is %d ",num1,num2);
	return 0;
}
