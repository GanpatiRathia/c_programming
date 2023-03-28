/*
	Palindrome Number Check (Control Statements)
		Write a C program to check the given number is palindrome or not
*/
#include <stdio.h>

int main ()
{
	int number;

	printf ("Enter the Number to check (if Palindrome or not) : ");
	scanf ("%d", &number);

	int temp = number;
	int new_num = 0;

	while (temp != 0)
	{
		new_num = (new_num * 10) + (temp % 10);
		temp /= 10;
	}

	if (new_num == number)
		printf ("%d is a palindrome.\n", number);
	else
		printf ("%d is not a palindrome.\n", number);

	return 0;
}
