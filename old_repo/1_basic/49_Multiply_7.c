/*
	Multiply 7 (Bitwise Operator)
		Multiply by 7 using bitwise operators
*/
#include <stdio.h>

int main ()
{
	int number;

	printf ("Enter an Integer : ");
	scanf ("%d", &number);

	printf ("%d*7 = %d\n", number, (number << 3) - number);

	return 0;
}
