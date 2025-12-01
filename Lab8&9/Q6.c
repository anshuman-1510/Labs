// 2.	Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.5;
    char c = 'X';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("Initial Addresses:\n");
    printf("Address of int pointer   : %p\n", ptrInt);
    printf("Address of float pointer : %p\n", ptrFloat);
    printf("Address of char pointer  : %p\n", ptrChar);

    printf("\nIncrementing Pointers\n");
    ptrInt++;
    ptrFloat++;
    ptrChar++;

    printf("After Increment:\n");
    printf("Address of int pointer   : %p\n", ptrInt);
    printf("Address of float pointer : %p\n", ptrFloat);
    printf("Address of char pointer  : %p\n", ptrChar);

    printf("\nDecrementing Pointers\n");
    ptrInt--;
    ptrFloat--;
    ptrChar--;

    printf("After Decrement:\n");
    printf("Address of int pointer   : %p\n", ptrInt);
    printf("Address of float pointer : %p\n", ptrFloat);
    printf("Address of char pointer  : %p\n", ptrChar);
    return 0;
}