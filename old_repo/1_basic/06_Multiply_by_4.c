/*
	Multiply by 4 (Operators and Conditional Statements)
		Write a C Program to Multiply given Number by 4 using Bitwise Operators
*/
#include <stdio.h>

int main ()
{
	int number;

	printf ("Enter an Integer : ");
	scanf ("%d", &number);

	printf ("%d*4 = %d\n", number, number << 2);

	return 0;
}
