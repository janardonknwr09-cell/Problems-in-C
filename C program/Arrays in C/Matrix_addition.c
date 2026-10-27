// Program to add two matrices using 2-dimensional array
// logic: sum[i][j] = mat1[i][j] + mat2[i][j]
#include<stdio.h>
int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2], row, col;
    printf("Enter the elements in the first matrix\n");
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {   
            printf("Enter the (%d,%d) element: ",row,col);
            scanf("%d",&mat1[row][col]);
        }
    }
   printf("Enter the elements in the second matrix\n");
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {   
            printf("Enter the (%d,%d) element: ",row,col);
            scanf("%d",&mat2[row][col]);
        }
    }
// Calculating the sum of two matrices
for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        { 
            sum[row][col]=mat1[row][col]+mat2[row][col];
        }
    }
    // Printing the sum of two matrices
    printf("The sum of two matrices is:\n");
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        { 
            printf("%d\t",sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}