/*Write a program that requests two float type numbers from the user and 
then divides the 1st number by the 2nd and displays the result along with the numbers.*/
#include<stdio.h>
int main(){
	float num1,num2;
	printf("Enter two float type numbers :\n");
	scanf("%f",&num1);
	scanf("%f",&num2);
	printf("\n%0.4f / %0.4f = %0.4f",num1,num2,num1/num2);
	return 0;
}
