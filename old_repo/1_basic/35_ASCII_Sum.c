/*
	ASCII Sum (Pointers)
		Write a C Program to find sum of ASCII values of as string using pointers
*/
#include <stdio.h>

int main ()
{
	char str[100], *p;
	long sum = 0;

	printf ("Enter the String : ");
	scanf ("%[^\n]s", str);

	p = str;
	while (*p != '\0')
		sum += (int)(*(p++));

	printf ("ASCII Sum \'%s\' : %li\n", str, sum);

	return 0;
}
