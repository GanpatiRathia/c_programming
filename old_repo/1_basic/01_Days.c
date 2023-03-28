/*
	Days (Operators and Conditional Statements)
		Write a C Program to Convert a Given Number of Days in terms of Years, Weeks & Days
*/
#include <stdio.h>

int main ()
{
	int days;

	printf ("Enter the Number of Days (Positive Integer) : ");
	int check_input = scanf ("%d", &days);

	if (days < 0)
		printf ("Time Cannot be Negative\n");
	else
		printf ("%d Days = %d Years, %d Weeks and %d Days\n", days, days / 365, (days % 365) / 7, ((days % 365) % 7));

	return 0;
}
