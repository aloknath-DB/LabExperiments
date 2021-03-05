/*Write a program to enter the temperature in degree Celsius and display it in Fahrenheit and vice-versa.
[NOTE: C = (5.0/9.0) × (F - 32)].*/
#include<stdio.h>
int main(){
	float c_temp,f_temp;

	//converting to Fahrenheit from Celsius
	printf("Enter the temperature in Celsius : ");
	scanf("%f",&c_temp);
	f_temp = (c_temp*9.0/5.0)+32.0;
	printf("The temperature in Fahrenheit is %0.4f `F: ",f_temp);

	//converting to celcius from Fahrenheit
	printf("\nEnter the temperature in Fahrenheit : ");
	scanf("%f",&f_temp);
	c_temp = (f_temp-32.0)*5.0/9.0;
	printf("The temperature in Celcius is %0.4f `C: ",c_temp);
	return 0;
}
