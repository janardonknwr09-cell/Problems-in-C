#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Rule check: Columns of Matrix 1 must equal Rows of Matrix 2
    if (c1 != r2) {
        printf("\nError: Matrix multiplication is not possible!\n");
        printf("The number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", c1, r2);
        return 1; 
    }

    // Declare matrices with user-defined sizes (VLA - Variable Length Arrays)
    int mat1[r1][c1];
    int mat2[r2][c2];
    int prod[r1][c2];

    // Input elements for the first matrix
    printf("\nEnter elements of the first matrix (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of the second matrix (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize the product matrix elements to 0 and multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0; // Reset sum for current cell
            for (int k = 0; k < c1; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result
    printf("\nResultant Matrix (%dx%d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
