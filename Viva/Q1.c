#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            printf("%d ", j);
        }
        for (int m = 0; m < 2 * i - 1; m++)
         {
            printf("  "); 
        }
        for (int j = n - i; j >= 1; j--) 
        {
            if (i == 0 && j == n - i)continue; 
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
