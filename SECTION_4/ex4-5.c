/*
An electricity board charges the following rates for the use of electricity.
 -For the first 200 units: 80 paise per unit
 -For the next 100 units: Rs. 1.30 per unit
 -Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge.
If the total amount is more that Rs. 400,
then an additional surcharge of 15% of total amount is charged.
Write a program to read the name of a consumer and
the number of units consumed and print the charge with his/her name.
*/
#include<stdio.h>
void main(){
    float units,amount=0,r1=0,r2=0,r3=0;
    /*r1,r2,r3 are variables to store intermediate values*/
    char consumer[50];
    printf("Enter the name of the consumer : ");
    gets(consumer);
    printf("\nEnter number of unites consumed by the consumer : ");
    scanf("%f",&units);

    if(units<=200)
        r1=units;
    else if(units>200&&units<=300){
        r1=200;
        r2=units-200;
    }
    else if(units>300){
        r1=200;
        r2=100;
        r3=units-300;
    }
    amount=(r1*.80)+(r2*1.30)+(r3*2.00)+100;
    if(amount>400)
        amount=amount+(amount*.15);

    printf("\nConsumer Name  : ");
    puts(consumer);
    printf("Units Consumed : %0.2f",units);
    printf("\nBill Amount    : %0.2f\n",amount);
}
