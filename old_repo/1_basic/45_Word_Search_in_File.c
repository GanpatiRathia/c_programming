/*
	Word Search in File (Files and Command line arguments)
		Write a C Program to Search for a word in a given file
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf ("Parameters missing or Extra parameters!!!\n");
		printf ("Usage : ./a.out <file_name> <word_to_search>\n");
		exit (-1);
	}

	char file_name[100];
	strcpy (file_name, argv[1]);

	FILE *file = fopen (file_name, "r");
	if (file == NULL)
	{
		printf ("%s missing or unable to open... Bye...\n", file_name);
		exit (-1);
	}

	char string[100], word[100];
	long word_pos = 0, count_word = 0, count_substr = 0;

	strcpy (word, argv[2]);

	while (!feof (file))
	{
		fscanf (file, "%s", string);
		word_pos++;
		if (!strcasecmp (string, word))
		{
			printf ("Found as %s at word position : %li\n", string, word_pos);
			count_word++;
		}
		else
			if (strcasestr (string, word))
			{
				printf ("Found as substring of %s at word position : %li\n", string, word_pos);
				count_substr++;
			}
	}
	fclose (file);

	printf ("\n\t\t%s found\n\t\t\t%li times as full word and\n\t\t\t%li times as a substring\n\t\tin the given file - %s.\n", word, count_word, count_substr, file_name);

	return 0;
}
