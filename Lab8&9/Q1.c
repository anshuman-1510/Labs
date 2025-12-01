/*Write a C program that uses functions to perform the following operations: 
a.Reading a complex number. 
b.Writing a complex number. 
c.Addition and subtraction of two complex numbers 
*/
#include <stdio.h>

struct Complex {
    float real,imaginary;
};

struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void writeComplex(struct Complex c) {
    if (c.imaginary >= 0)
        printf("%.2f + %.2fi", c.real, c.imaginary);
    else
        printf("%.2f - %.2fi", c.real, -c.imaginary);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    return result;
}

int main() {
    struct Complex num1, num2, sum, difference;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    difference = subComplex(num1, num2);

    printf("The results are:\n");

    printf("First number: ");
    writeComplex(num1);
    printf("\n");

    printf("Second number: ");
    writeComplex(num2);
    printf("\n");

    printf("Sum: ");
    writeComplex(sum);
    printf("\n");

    printf("Difference: ");
    writeComplex(difference);
    printf("\n");
    
    return 0;
}