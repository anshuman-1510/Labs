// 1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.75;
    char c = 'A';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("Pointers and their values in C\n");

    printf("Integer variable value: %d\n", a);
    printf("Address stored in int pointer: %p\n", ptrInt);
    printf("Value pointed by int pointer: %d\n\n", *ptrInt);

    printf("Float variable value: %.2f\n", b);
    printf("Address stored in float pointer: %p\n", ptrFloat);
    printf("Value pointed by float pointer: %.2f\n\n", *ptrFloat);

    printf("Character variable value: %c\n", c);
    printf("Address stored in char pointer: %p\n", ptrChar);
    printf("Value pointed by char pointer: %c\n", *ptrChar);
    return 0;
}