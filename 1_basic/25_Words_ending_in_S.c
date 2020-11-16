/*
	Words ending in S (One dimensional arrays and String)
		Write a C Program to Print the Words Ending with Letter S in a given String
*/
#include <stdio.h>

int main ()
{
	char str[100], sub_str[100];

	printf ("Enter the string : ");
	scanf ("%[^\n]s", str);

	int i = 0, k = 0;
	printf ("Strings ending with 'S' or 's' : \n");	
	do {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == ':' || str[i] == ';' || str[i] == '\0')
		{
			sub_str[k] = '\0';
			if (str[i - 1] == 'S' || str[i - 1] == 's')
				printf ("%s\n", sub_str);
			k = 0;
			i++;
		}
		else
		{
			sub_str[k++] = str[i++];
		}
	} while (str[i - 1] != '\0');

	return 0;
}
