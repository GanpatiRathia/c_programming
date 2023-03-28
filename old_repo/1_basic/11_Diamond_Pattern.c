/*
	Diamond Pattern (Control Statements)
		Write a C Program to Print Diamond Pattern
*/
#include <stdio.h>

int main ()
{
	int quadrant_width;

	printf ("Enter the Quadrant Width of Diamond for Pattern : ");
	scanf ("%d", &quadrant_width);

	for (int i = 0; i < quadrant_width; i++)
	{
		for (int j = -(quadrant_width - 1); j <= i; j++)
		{
			if (j < -i)
				printf (" ");
			else
				printf ("*");
		}
		printf ("\n");
	}

	for (int i = quadrant_width - 2; i >= 0; i--)
	{
		for (int j = -(quadrant_width - 1); j <= i; j++)
		{
			if (j < -i)
				printf (" ");
			else
				printf ("*");
		}
		printf ("\n");
	}

	return 0;
}
