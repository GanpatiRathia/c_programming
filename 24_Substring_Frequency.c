/*
	Sub-string Frequency (One dimensional arrays and String)
		Write a C Program to Count the Occurrence of a Substring in a given String
*/
#include <stdio.h>

int main ()
{
	int count = 0, j;
	char str[100], sub_str[100];

	printf ("Enter the string : ");
	scanf ("%[^\n]s", str);
	getchar ();
	printf ("Enter the sub-string to find : ");
	scanf ("%[^\n]s", sub_str);

	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (sub_str[0] == str[i])
		{
			for (j = 1; sub_str[j] != '\0'; ++j)
			{
				if (sub_str[j] != str[i + j])
					break;
			}
			if (sub_str[j] == '\0')
				count++;
		}
	}

	if (count)
		printf ("\"%s\" found in \"%s\" : %d times.\n", sub_str, str, count);
	else
		printf ("\"%s\" not fount in \"%s\".\n", sub_str, str);

	return 0;
}
