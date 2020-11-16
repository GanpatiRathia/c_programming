/*
Swap using Bitwise XOR (Operators and Conditional Statements)
	Write a C Program to Swap the Contents of two Numbers using Bitwise XOR Operation
*/
#include <stdio.h>

int main ()
{
	int number1, number2;

	printf ("Enter 2 Integers : ");
	scanf ("%d %d", &number1, &number2);

	printf ("Before Swap :\n");
	printf ("Number1 = %d and Number2 = %d\n", number1, number2);

	number2 = number1 ^ number2;
	number1 = number1 ^ number2;
	number2 = number1 ^ number2;

	printf ("After Swap :\n");
	printf ("Number1 = %d and Number2 = %d\n", number1, number2);

	return 0;
}
