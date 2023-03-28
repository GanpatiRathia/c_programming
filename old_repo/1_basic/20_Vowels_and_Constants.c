/*
	Vowels and Consonants (One dimensional arrays and String)
		Write a C Program to Find the count of Vowels and Consonants in a String
*/
#include <stdio.h>

int isvowel (char c)
{
	switch (c)
	{
		case 'A': return 1;
		case 'E': return 1;
		case 'I': return 1;
		case 'O': return 1;
		case 'U': return 1;
		case 'a': return 1;
		case 'e': return 1;
		case 'i': return 1;
		case 'o': return 1;
		case 'u': return 1;
	}

	return 0;
}

int isalphabet (char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a') && (c <= 'z'))
		return 1;

	return 0;
}

int main ()
{
	int vowels = 0, consonants = 0;
	char a[100];

	printf ("Enter the string : ");
	scanf ("%[^\n]s", a);

	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (isvowel (a[i]))
			vowels++;
		else
			consonants += isalphabet (a[i]);
	}

	printf ("Vowels = %d and Consonants = %d.\n", vowels, consonants);

	return 0;
}
