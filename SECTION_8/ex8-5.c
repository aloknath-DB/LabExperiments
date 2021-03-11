/*Write a program which reads a string and prints it in alphabetical order. For example, the word WELCOME should be displayed as CEELMOW*/
#include <stdio.h>
#include <string.h>

void main ()
{
	char string[100];
    char temp;
	int i,j,n;
    puts("\nEnter the string : ");
	gets(string);
	n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}
	puts("\nThe sorted string is : \n");
    puts(string);
}