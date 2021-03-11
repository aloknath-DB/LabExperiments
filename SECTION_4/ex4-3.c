/*
Admission to professional course is subject to the following conditions:
a) Marks in Mathematics >= 60
b) Marks in Physics >= 50
c) Marks in Chemistry >= 40
d) Total in all three subjects >= 200 (OR) Total in Mathematics and Physics >= 150

Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is admitted
 else displays “Not Admitted”.
*/
#include<stdio.h>
void main()
{
    float M,P,C,MPC,MP;
    /*M,P,C denotes the marks secured in mathematics, physics and chemistry respectively
    MPC represents total mark in three subjects and MP is total mark in Maths and Physics
    */
    printf("Enter Marks of Mathematics : ");
    scanf("%f",&M);
    printf("Enter Marks of Physics : ");
    scanf("%f",&P);
    printf("Enter Marks of Chemistry : ");
    scanf("%f",&C);
    MPC = M + P + C;
    MP = M + P;

    if((M>=60) && (P>=50) && (C>=40) && ((MPC>=200) || (MP>=150)))
        printf("\nAdmitted\n");
    else
        printf("\nNot Admitted\n");
}

