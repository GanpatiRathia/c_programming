/*
	Row and Column Sum (Two dimensional arrays)
		Write a C Program to find the Sum of each Row and each Column of a MxN Matrix
*/
#include <stdio.h>

int main ()
{
	int matrix[100][100], row_sum[100] = {0}, column_sum[100] = {0};
	int row, column;

	printf ("Enter Row Size and Column Size : ");
	scanf ("%d %d", &row, &column);

	printf ("Enter Matrix elements :\n");
	for (int r = 0; r < row; r++)
		for (int c = 0; c < column; c++)
		{
			scanf ("%d", &matrix[r][c]);
			// row sum
			row_sum[r] += matrix[r][c];
			// column sum
			column_sum[c] += matrix[r][c];
		}

	for (int r = 0; r < row; r++)
		printf ("Row %d sum : %d\n", r + 1, row_sum[r]);

	for (int c = 0; c < column; c++)
		printf ("Column %d sum : %d\n", c + 1, column_sum[c]);

	return 0;
}
