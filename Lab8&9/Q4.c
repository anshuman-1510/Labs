// 4.	Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address. 

#include <stdio.h>

union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[100];
};

int main() {
    union Address address;

    printf(" Displaying present address using union\n");

    printf("Enter your Name: ");
    scanf(" %[^\n]", address.name);
    printf("Name: %s\n", address.name);

    printf("\nEnter your Home Address: ");
    scanf(" %[^\n]", address.home_address);
    printf("Home Address: %s\n", address.home_address);

    printf("\nEnter your Hostel Address: ");
    scanf(" %[^\n]", address.hostel_address);
    printf("Hostel Address: %s\n", address.hostel_address);

    printf("\nEnter your City: ");
    scanf(" %[^\n]", address.city);
    printf("City: %s\n", address.city);

    printf("\nEnter your State: ");
    scanf(" %[^\n]", address.state);
    printf("State: %s\n", address.state);

    printf("\nEnter ZIP Code: ");
    scanf(" %[^\n]", address.zip);

    printf("Your present address\n");

    printf("ZIP Code: %s\n", address.zip);
    return 0;
}