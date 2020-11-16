/*
	Armstrong Number Check (Control Statements)
		Write a C Program to Check whether a given number is Armstrong or not.
*/
#include <stdio.h>

int main ()
{
	int number;

	printf ("Enter the Number to check (if Armstrong or not) : ");
	scanf ("%d", &number);

	int temp = number;
	int new_num = 0;
	int digit;

	while (temp != 0)
	{
		digit = temp % 10;
		new_num += (digit * digit * digit);
		temp /= 10;
	}

	if (new_num == number)
		printf ("%d is an Armstrong number.\n", number);
	else
		printf ("%d is not an Armstrong number.\n", number);

	return 0;
}
