/*
	Diagonal Sum (Two dimensional arrays)
		Write a C Program to find the Sum of the Main and Opposite Diagonal Elements of a MxN Matrix
*/
#include <stdio.h>

int main ()
{
	int matrix[100][100],;
	long main_diag_sum = 0, opp_diag_sum = 0;
	int row, column;

	printf ("Enter Row Size and Column Size : ");
	scanf ("%d %d", &row, &column);

	if (row == column)
	{
		printf ("Enter Matrix elements : ");
		for (int r = 0; r < row; r++)
			for (int c = 0; c < column; c++)
			{
				scanf ("%d", &matrix[r][c]);
				if (r == c)
					main_diag_sum += matrix[r][c];
				if ((r + c) == (column - 1))
					opp_diag_sum += matrix[r][c];
			}
		printf ("Main Diagonal Sum = %li\nOpposite Diagonal Sum = %li\n", main_diag_sum, opp_diag_sum);
	}
	else
		printf ("No diagonals as the matrix is not Square Matrix.\n");

	return 0;
}
