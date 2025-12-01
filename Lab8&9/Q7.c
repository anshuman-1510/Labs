//Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void modifyValues(int *x, float *y) {
    *x = *x + 10;
    *y = *y - 2;
}

int main() {
    int a = 5;
    float b = 3.5;

    printf("Before modification\n");
    printf("Integer value: %d\n", a);
    printf("Float value  : %.2f\n", b);

    modifyValues(&a, &b);

    printf("After modification\n\n");
    printf("Integer value: %d\n", a);
    printf("Float value  : %.2f\n", b);
    return 0;
}