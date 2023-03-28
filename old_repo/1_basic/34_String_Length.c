/*
	String Length (Pointers)
		Write a C Program to find length of string using pointers
*/
#include <stdio.h>

int main ()
{
	char str[100], *p;
	int len = 0;

	printf ("Enter the String : ");
	scanf ("%[^\n]s", str);

	p = str;
	while (*(p++) != '\0')
		len++;

	printf ("Length \'%s\' : %d\n", str, len);

	return 0;
}
