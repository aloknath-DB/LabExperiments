/*Rewrite the program mentioned in Experiment 2.2. However, rename the data
types ‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.*/
#include<stdio.h>

typedef int integer;
int main(){
    typedef float Decimal;
    Decimal P,R,SI,CI;
    integer T;
    /*P denotes principal amount, R denotes rate of interest, T denotes time duration,
    SI denotes Simple Interest, CI denotes compound interest*/
    printf("Enter principal amount : ");
    scanf("%f",&P);
    printf("Enter rate of interest : ");
    scanf("%f",&R);
    printf("Enter time duration in year: ");
    scanf("%d",&T);

    /*calculating simple interest*/
    SI = (P * R * T)/100;
    printf("\nThe simple interest for entered data is : %f",SI);

    /*calculating compound interest using the formula
    Compound Interest=Principle Amount*((1+(Rate of interest/100)^Time))*/
    CI = P*(pow(1+(R/100),T));
    printf("\nThe compound interest for entered data is : %f",CI);
	return 0;
}
