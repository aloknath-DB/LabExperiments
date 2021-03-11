/*Write a program that takes an integer‘n’ as input and prints the Fibonacci series 
up to ‘n’.(Hint: Fibonacci series: 1 1 2 3 5 8 13 21 ...)*/
#include <stdio.h>
int main() {
    int i, n, t1 = 1, t2 = 1, nextTerm;
    //t1 and t2 are term1 and term2
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}