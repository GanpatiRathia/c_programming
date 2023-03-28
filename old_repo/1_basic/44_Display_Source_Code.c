/*
	Display Source Code (Files and Command line arguments)
		Write a C Program to display its own Source Code as its Output along with number of lines and words
*/
#include <stdio.h>
#include <ctype.h>

int main ()
{
	FILE *file;
	char c;
	int lines = 1, words = 0, alpha_flag = 0;

	file = fopen (__FILE__, "r");
	c = getc (file);
	while (c != EOF)
	{
		if (isalpha (c))
			alpha_flag = 1;
		else
			if (alpha_flag)
			{
				words++;
				alpha_flag = 0;
			}

		if (c == '\n')
			lines++;

		printf ("%c", c);
		c = getc (file);
	}
	fclose (file);

	printf ("\n\n\t\tNumber of Line are : %d", lines);
	printf ("\n\t\tNumber of Words are : %d\n", words);

	return 0;
}
