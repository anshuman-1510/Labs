/*b.  
           1
          1 1
         1 2 1
        1 3 3 1
       1 4 6 4 1 */

#include <stdio.h>

int main() {
    int rows = 5, num = 1,i,j,space;

    for (i = 0; i < rows; i++) {
        
        for (space= 0; space < rows - i; space++) {
            printf("  ");
        }
        num = 1;
        for ( j = 0; j <= i; j++) {
            printf("%d   ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
