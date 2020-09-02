/*
	Transpose of Matrix (Two dimensional arrays)
		Write a C Program to Find the Transpose of a given Matrix
*/
#include <stdio.h>

int main ()
{
	int matrix[100][100], transpose[100][100];
	int row, column;

	printf ("Enter Row Size and Column Size : ");
	scanf ("%d %d", &row, &column);
	printf ("Enter Initial Matrix elements :\n");
	for (int r = 0; r < row; r++)
		for (int c = 0; c < column; c++)
		{
			scanf ("%d", &matrix[r][c]);
			transpose[c][r] = matrix[r][c];
		}

	printf ("Initial Matrix :\n");
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < column; c++)
			printf ("%10d", matrix[r][c]);
		printf ("\n");
	}

	printf ("Transpose Matrix :\n");
	for (int r = 0; r < column; r++)
	{
		for (int c = 0; c < row; c++)
			printf ("%10d", transpose[r][c]);
		printf ("\n");
	}

	/*Directly printing transpose form main matrix*/
	/*for (int r = 0; r < column; r++)
	{
		for (int c = 0; c < row; c++)
			printf ("%10d", matrix[c][r]);
		printf ("\n");
	}*/

	return 0;
}
