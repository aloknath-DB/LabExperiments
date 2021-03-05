/*Write a program to compute the area of a triangle given its base and height.*/
#include<stdio.h>
int main(){
	float height, base, area;
	printf("Enter height of triangle : ");
	scanf("%f",&height);
	printf("Enter base of triangle : ");
	scanf("%f",&base);
	area = (height*base)/2;
	printf("\nThe are of the triagle having height : %0.4f , base : %0.4f is %0.4f",height,base,area);
	return 0;
}
