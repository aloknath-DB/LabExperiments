/*Write a program to input a character and check whether it is in upper case or lower
case using conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>
int main(){
	char ch;
	int chr;
	printf("Enter a character : ");
	scanf("%c",&ch);
	chr=ch;
	(chr>=97&&chr<=122)?printf("LOWER CASE LETTER"):
	((chr>=65&&chr<=90)?printf("UPPER CASE LETTER"):printf("This isn't a character from Alphabet series"));
	return 0;
}
