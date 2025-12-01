#include <stdio.h>

int main()
 {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least we need two integers\n");
        return 0;
    }
    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest, secondlargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondlargest = arr[1];
    } else {
        largest = arr[1];
        secondlargest = arr[0];
    }
    
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

   printf("The second largest integer is: %d\n", secondlargest);
    return 0;
}