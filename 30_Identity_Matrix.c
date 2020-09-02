/*
	Identity Matrix (Two dimensional arrays)
		Write a C Program to Check if a given Matrix is an Identity Matrix
*/
#include <stdio.h>

int main ()
{
	int matrix[100][100];
	int row, column, flag = 0;

	printf ("Enter Row Size and Column Size : ");
	scanf ("%d %d", &row, &column);

	if (row != column)
	{
		printf ("The matrix isn't a Square Matrix.\n");
		return 0;
	}
	else
	{
		printf ("Enter Matrix elements :\n");
		for (int r = 0; r < row; r++)
			for (int c = 0; c < column; c++)
			{
				scanf ("%d", &matrix[r][c]);
				if (r == c)
				{
					if (matrix[r][c] != 1)
						flag++;
				}
				else
					if (matrix[r][c] != 0)
						flag++;
			}
	}

	if (flag)
		printf ("The matrix is not an Identity Matrix.\n");
	else
		printf ("The matrix is an Identity Matrix.\n");

	return 0;
}
