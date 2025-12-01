/*WAP to generate the following set of output.
a.  
  1
 2 3
4 5 6*/
  
#include <stdio.h>

int main() {
    int rows = 3, i, j, space, num = 1;   
 
    for (i = 1; i <= rows; i++) {
        
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d   ", num);
            num++;
        }
printf("\n");
       
    }

    return 0;
}