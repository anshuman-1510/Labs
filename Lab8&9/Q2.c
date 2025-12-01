// 2.	Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary.

#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    float basicPay;
    float DA;
    float grossSalary;
};

int main() {
    struct Employee emp[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees (up to 100): ");
    scanf("%d", &n);
 
    if (n < 1 || n > 100) {
        printf("Invalid number of employees,Please enter between 1 and 100.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        emp[i].DA = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + emp[i].DA;
    }

    printf("EMPLOYEE PAY DETAILS\n");
    printf("%-20s%-15s%-15s%-15s\n", "Name", "Basic Pay", "DA (52%)", "Gross Salary");
    for (int i = 0; i < n; i++) {
        printf("%-20s%-15.2f%-15.2f%-15.2f\n",
               emp[i].name, emp[i].basicPay, emp[i].DA, emp[i].grossSalary);
    }
    return 0;
}