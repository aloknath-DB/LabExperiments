/*Write a program to input a character and check whether it is a vowel or consonant using conditional operator.
[Hint: compare against the ASCII range.]*/
#include<stdio.h>
int main(){
    int vowel[]={97,101,105,111,117,65,69,73,79,85},i;
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	int chr=ch;
	for(i=0;i<10;i++){
        if(chr==vowel[i]){
            printf("__THIS IS A VOWEL__");
            break;
        }

	}
	if(i==10){
        printf("__THIS IS A CONSONANT__");
	}

	return 0;
}
