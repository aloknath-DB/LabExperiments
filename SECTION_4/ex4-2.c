/*Write a program to read the string �WORDPROCESSING� form the terminal and
display the same in the following formats:
a) WORD PROCESSING
b) WORD
   PROCESSING
c) W P
d) W. P.
*/
#include<stdio.h>
// #include<conio.h>
void main(){
    char str[20];
    int i=0;
    puts("Enter a string WORDPROCESSING ");
    gets(str);

    while(str[i]!='\0')
    {
        putchar(str[i]);
        if(i==3)
            putchar(' ');
        i++;
    }
    i=0;
    putchar('\n');
    while(str[i]!='\0')
    {
        putchar(str[i]);
        if(i==3)
            putchar('\n');
        i++;
    }
    i=0;
    putchar('\n');
    while(str[i]!='\0')
    {
        if(i==0 || i==4)
            {
                putchar(str[i]);
                printf(" ");
            }
        i++;
    }

    i=0;
    printf("\n");
    while(str[i]!='\0')
    {
        if(i==0 || i==4)
            {
                putchar(str[i]);
                putchar('.');
                printf("  ");
            }
        i++;
    }

}
