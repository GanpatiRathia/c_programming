/*
	Pascal Triangle (Control Statements)
		Write a C program to print Pascal triangle
*/
#include <stdio.h>
#define MAX_HEIGHT 20

int main ()
{
	int triangle_height;
	int pascal[21][21];

	printf ("Enter Height of Pascal Triangle to generate (<= 20) : ");
	scanf ("%d", &triangle_height);

	if (triangle_height > MAX_HEIGHT)
		printf ("You Entered Height > %d\n", MAX_HEIGHT);
	else
	{
		for (int i = 0; i <= triangle_height; i++)
		{
			for (int j = 2 * (triangle_height - i) - 1; j >= 0; j--)
				printf ("  ");
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || i == j)
					pascal[i][j] = 1;
				else
					pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
				printf ("%8d", pascal[i][j]);
			}
			printf ("\n");
		}
	}

	return 0;
}
