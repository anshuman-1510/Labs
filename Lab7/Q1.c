//Q1.Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.

#include <stdio.h>

long fact_rec(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_rec(n - 1);
}
long fact_nonrec(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
 
int main() {
    int n, r;
    long nCr1, nCr2;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input 'r' should be <= n\n");
        return 0;
    }

    nCr1 = fact_rec(n) / (fact_rec(r) * fact_rec(n - r));
    nCr2 = fact_nonrec(n) / (fact_nonrec(r) * fact_nonrec(n - r));

    printf("Using Recursive Function: C(%d,%d) = %ld\n", n, r, nCr1);
    printf("Using Non-Recursive Function: C(%d,%d) = %ld\n", n, r, nCr2);

    printf("Table of C(n, r) values up to n = %d:\n", n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            long c = fact_nonrec(i) / (fact_nonrec(j) * fact_nonrec(i - j));
            printf("C(%d,%d)=%ld  ", i, j, c);
        }
        printf("\n");
    }

    return 0;
}