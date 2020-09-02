/*
	Line Numbers (Files and Command line arguments)
		Write a C Program to give numbers for each line in a file
*/
#include <stdio.h>

int main ()
{
	FILE *file, *copy;
	char c;
	int lines = 1, words = 0, alpha_flag = 0;

	char original_file[] = __FILE__;
	char copy_file[] = "copy_47.txt";

	// copying to a new file
	// file = fopen (__FILE__, "r");
	file = fopen (original_file, "r");
	copy = fopen (copy_file, "w");
	c = getc (file);
	if (c != EOF)
	{
		fprintf (copy, "%d\t", lines);
	}
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

		fprintf (copy, "%c", c);
		if (c == '\n')
		{
			lines++;
			fprintf (copy, "%d\t", lines);
		}

		c = getc (file);
	}
	fclose (file);
	fclose (copy);

	// remove (original_file);
	// rename (copy_file, original_file);

	printf ("\n\n\t\tNumber of Line are : %d", lines);
	printf ("\n\t\tNumber of Words are : %d\n", words);

	return 0;
}
