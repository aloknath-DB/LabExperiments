/*Write a program that takes the radius of a circle and displays its area and perimeter.*/
#include<stdio.h>
#define PI 3.1415
int main(){
	float rad,peri_m,area;
	printf("Enter the radius of Circle");
	scanf("%f",&rad);
	peri_m=2*PI*rad;
	area=PI*rad*rad;
	printf("Perimeter of a circle having radius of %0.4f is %f ",rad,peri_m);
	printf("\nArea of a circle having radius of %0.4f is %f ",rad,area);
	return 0;
}
