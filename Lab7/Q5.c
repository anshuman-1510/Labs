//Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.


#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int i, j;
    char temp;

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    REVERSE(text);

    printf("Reversed string is: %s\n", text);

    return 0;
}
