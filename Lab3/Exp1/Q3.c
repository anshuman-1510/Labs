#include <stdio.h>

int main() 
{
    char name [10];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);   

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}
 
