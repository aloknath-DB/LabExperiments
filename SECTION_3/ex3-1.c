/*Write a program to compute the area of a triangle given its three sides.*/
#include<stdio.h>
#include<math.h>
int main(){
	float s1,s2,s3,p,area,temp;/*temp is a variable to hold intermediate values*/
	/*s1,s2,s3 denotes three sides of a triangle and p is the perimeter*/
	printf("Enter three sides of a triangle one by one \n");
	scanf("%f",&s1);
	scanf("%f",&s2);
	scanf("%f",&s3);
    p=s1+s2+s3;
	/*formula used is (p(p-a)(p-b)(p-c))^(1/2)*/
	temp=p*(p-s1)*(p-s2)*(p-s3);
    area=sqrt(temp);
    printf("area of the triangle is : %f",area);

	return 0;
}
