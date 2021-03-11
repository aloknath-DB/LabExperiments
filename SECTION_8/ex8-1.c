/*Write a program to find out the length of a string without using the strlen()function.*/
#include<stdio.h>
void main()
{
    char string[50];
    int i;
    printf("\nEnter a string to find its length : ");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        continue;
    }
    printf("\nLength of the string is %d",i);
}