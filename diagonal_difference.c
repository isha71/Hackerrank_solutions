#include <stdio.h>
#include <math.h>
int main()
{
    int leftToRight = 0, rightToLeft = 0;

    int dim;
    printf("Enter dimension of square matrix\n");
    scanf("%d", &dim);
    int matrix[dim][dim];
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < dim; i++)
    {
        leftToRight += matrix[i][i];
    }

    for (int i = 0, j = dim - 1; i < dim; i++, j--)
    {
        rightToLeft += matrix[i][j];
    }

    printf("%d\n", abs(leftToRight - rightToLeft));

    return 0;
}