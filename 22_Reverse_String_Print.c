/*
	Reverse String Print (One dimensional arrays and String)
		Write a C Program to print string in reverse order without string functions
*/
#include <stdio.h>

int main ()
{
	int len;
	char str[100];

	printf ("Enter the string : ");
	scanf ("%[^\n]s", str);

	for (len = 0; str[len] != '\0'; len++);

	printf ("Reversed string : ");
	for (int i = len - 1; i >= 0; i--)
		printf ("%c", str[i]);
	printf ("\n");

	return 0;
}
