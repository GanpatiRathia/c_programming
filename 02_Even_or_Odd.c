/*
	Even or Odd (Operators and Conditional Statements)
		Write a C program to check the given number is even or odd using If and Switch statement
*/
#include <stdio.h>

int main ()
{
	int number;

	printf ("Enter an Integer : ");
	scanf ("%d", &number);

	if (number % 2)
		printf ("%d is an Odd Number\n", number);
	else
		printf ("%d is an Even Number\n", number);

	return 0;
}
