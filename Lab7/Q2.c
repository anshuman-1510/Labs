//Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers.

#include <stdio.h>

int findGCD(int n1, int n2) {
    if (n2 == 0)
        return n1;
    else
        return findGCD(n2, n1 % n2);
}

int main() {
    int firstNum, secondNum, gcdValue;

    printf("Enter two numbers: ");
    scanf("%d %d", &firstNum, &secondNum);

    gcdValue = findGCD(firstNum, secondNum);

    printf("The GCD of %d and %d is %d.\n", firstNum, secondNum, gcdValue);

    return 0;
}