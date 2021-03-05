/*Write a program to read the price of an item in decimal form (like 15.95) and print
the output in paise (like 1595 paise).*/
#include<stdio.h>
int main(){
	float price;
	printf("Enter the price of an item : ");
	scanf("%f",&price);
	printf("the price of the item in paise is : %0.0fpaise",price*100);
	return 0;
}
