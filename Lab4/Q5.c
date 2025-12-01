#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3, p1, p2, p3, maxperimeter;
    

    printf("Enter length and breadth of 1st Rectangle : ");
    scanf("%d %d", &l1, &b1);
    printf("Enter length and breadth of 2nd Rectangle : ");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of 3rd Rectangle : ");
    scanf("%d %d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    maxperimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("Perimeter of 1st Rectangle  = %d\n", p1);
    printf("Perimeter of 2nd Rectangle  = %d\n", p2);
    printf("Perimeter of 3rd Rectangle  = %d\n", p3);

    if (maxperimeter == p1)
        printf(" 1st Rectangle has the highest perimeter: %d\n", maxperimeter);
    else if (maxperimeter== p2)
        printf(" 2nd Rectangle has the highest perimeter: %d\n", maxperimeter);
    else 
        printf(" 3rd Rectangle has the highest perimeter: %d\n", maxperimeter);

    return 0;
}