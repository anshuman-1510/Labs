//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char another;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        
        printf("do you can enter another number (y/n): ");
        scanf(" %c", &another);

    }
     while (another == 'y');
    printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    printf("Total Zeroes: %d\n", zero);

    return 0;
}