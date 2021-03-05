/*write a program to compute simple and compound interest*/
#include<stdio.h>
#include<math.h>
void main(){
    float P,R,T,SI,CI;
    /*P denotes principle amount, R denotes rate of interest, T denotes time duration,
    SI denotes Simple Interest, CI denotes compound interest*/
    printf("Enter principle amount : ");
    scanf("%f",&P);
    printf("Enter rate of interest : ");
    scanf("%f",&R);
    printf("Enter time duration : ");
    scanf("%f",&T);

    /*calculating simple interest*/
    SI = (P * R * T)/100;
    printf("\nThe simple interest for entered data is : %f",SI);

    /*calculating compound interest using the formula
    Compound Interest=Principle Amount*((1+(Rate of interest/100)^Time))*/
    CI = P*(pow(1+(R/100),T));
    printf("\nThe compound interest for entered data is : %f",CI);
}
