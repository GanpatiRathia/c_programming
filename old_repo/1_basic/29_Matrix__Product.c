/*
	Matrix : Product (Two dimensional arrays)
		Write a C Program to Compute the Product of Two Matrices
*/
#include <stdio.h>

int main ()
{
	int matrixA[100][100], matrixB[100][100], product[100][100];
	int row1, column1, row2, column2;

	printf ("Enter Row Size and Column Size for Matrix A : ");
	scanf ("%d %d", &row1, &column1);
	printf ("Enter Row Size and Column Size for Matrix B : ");
	scanf ("%d %d", &row2, &column2);

	if (column1 == row2)
	{
		printf ("Enter Matrix A elements :\n");
		for (int r = 0; r < row1; r++)
			for (int c = 0; c < column1; c++)
				scanf ("%d", &matrixA[r][c]);
		printf ("Enter Matrix B elements :\n");
		for (int r = 0; r < row2; r++)
			for (int c = 0; c < column2; c++)
				scanf ("%d", &matrixB[r][c]);

		printf ("Matrix A :\n");
		for (int r = 0; r < row1; r++)
		{
			for (int c = 0; c < column1; c++)
				printf ("%10d", matrixA[r][c]);
			printf ("\n");
		}

		printf ("Matrix B :\n");
		for (int r = 0; r < row2; r++)
		{
			for (int c = 0; c < column2; c++)
				printf ("%10d", matrixB[r][c]);
			printf ("\n");
		}

		printf ("Product Matrix :\n");
		for (int r = 0; r < row1; r++)
		{
			for (int c = 0; c < column2; c++)
			{
				product[r][c] = 0;
				for (int k = 0; k < column1; k++)
				{
					product[r][c] += (matrixA[r][k] * matrixB[k][c]);
				}
				printf ("%10d", product[r][c]);
			}
			printf ("\n");
		}
	}
	else
	{
		printf ("Multiplication not possible.\n");
	}

	return 0;
}
