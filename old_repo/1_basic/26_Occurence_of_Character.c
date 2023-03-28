/*
	Occurence of Character (One dimensional arrays and String)
		Write a C Program to Count the Number of Occurrences of each Character Ignoring the Case of Alphabets and Display them
*/
#include <stdio.h>

int main ()
{
	char str[100];
	int difference = (int)('a' - 'A'), freq[128] = {0};

	printf ("Enter the string : ");
	scanf ("%[^\n]s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			freq[(int)(str[i] + difference)]++;
		else
			freq[(int)(str[i])]++;
	}

	printf ("Occurences of Characters : \n");
	for (int i = 0; i < 128; i++)
	{
		if (freq[i])
			printf("\'%c\' ---> (%d)\n", (char)(i), freq[i]);
	}

	return 0;
}
