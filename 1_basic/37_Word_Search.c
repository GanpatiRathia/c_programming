/*
	Word Search (Pointers)
		Write a C Program to search for a word in a given array of strings using pointers
*/
#include <stdio.h>
#include <string.h>

int main ()
{
	char str[100][100], word[100];
	int size, flag = 0;

	printf ("Enter the number of strings : ");
	scanf ("%d", &size);
	getchar ();
	printf ("Enter the Strings :\n");
	for (int i = 0; i < size; i++)
		gets (str[i]);
		// scanf ("%s", str[i]);
	printf ("Enter the Word to search for : ");
	scanf ("%s", word);

	char (*ptr)[100] = str;
	for (int i = 0; i < size; ++i)
	{
		if (strcasestr (*(ptr + i), word))
		{
			flag ++;
			printf ("\tMatched with string[%d] : %s\n", i, *(ptr + i));
		}
	}

	if (!flag)
	{
		printf ("No occurences of '%s' word found in the strings.\n", word);
	}

	return 0;
}
