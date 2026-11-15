#include <stdio.h>

int main()
{
    int matrix[10][10];
    int sparse[100][3];

    int rows, cols;
    int i, j, k = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
sparse[0][0] = rows;
    sparse[0][1] = cols;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];

                k++;
            }
        }
    }

    sparse[0][2] = k - 1;

    printf("\nSparse Matrix Representation:\n");

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sparse[i][j]);
        }

        printf("\n");
    }

    return 0;
}
