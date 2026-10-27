// This program shows the use of 2-dimensional Array to print matrix
#include<stdio.h>
int main()
{
    int mat[2][2], row, col;
    printf("Enter the elements in the array\n");
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            scanf("%d",&mat[row][col]);
        }
    }

    // printing the elements of the matrix
   for(row=0; row<2; row++)
   {
    for(col=0; col<2; col++)
    {
        printf("The (%d,%d) element is %d\n",row,col, mat[row][col]);
    }
   }

    return 0;
}