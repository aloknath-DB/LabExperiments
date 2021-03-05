/*Write a program to input a number and check whether it is Armstrong or not 
(An Armstrong number is an integer such that the sum of the cubes of its digits is equal
 to the number itself. For example, 371 is an Armstrong number since 33+ 73+ 13= 371).*/
 #include<stdio.h>
 void main()
 {
    int n,num,rem,arm_num=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    num=n;
    while(n != 0)
    {
        rem=n%10;
        arm_num=arm_num + (rem * rem * rem);
        n=n/10;
    }
   
    if(num == arm_num)
    {
        printf("\n\n%d is an armstrong number",num);
    }
    else
    {
        printf("\n\n%d is not an armstrong number",num);
    }
    
 }