//Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
           
#include <stdio.h>

int main() 
{
    int L;

    printf("Enter the limit: ");
    scanf("%d", &L);

    printf("Ramanujan umbers upto %d^3:\n", L);
    for (int a = 1; a <= L; a++) {
        for (int b = a + 1; b <= L; b++) {
            int n1 = a*a*a + b*b*b;

            for (int c = a + 1; c <= L; c++) {
                for (int d = c + 1; d <= L; d++) {
                    int n2 = c*c*c + d*d*d; 

                    if (n1 == n2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d);
                    }  }  }  }
    }

    return 0;
}
