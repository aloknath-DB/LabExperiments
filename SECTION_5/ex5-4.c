/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).*/
#include<stdio.h>
int fact(int f)
{
    int result=1;
    while(f!=0)
    {
        result=result*f--;
    }
    return result;
}

void main()
{
    int n,i,num;
    float sum=0;
    printf("Enter an integer value : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        num=i;
        if(num%2==0){
            sum=sum-((float)num/(float)fact(num+1));
        }
        else{
            sum=sum+((float)num/(float)fact(num+1));
        }

    }
    printf("Result of the series is : %f ",(1+sum));
}
