//4.WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.

#include <stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
            C[i][j] = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}