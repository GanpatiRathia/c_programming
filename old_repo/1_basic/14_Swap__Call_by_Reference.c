/*
	Swap - Call by Reference (Functions and Recursion)
		Write a C program to implement user-defined swap() function using call by reference
*/
#include <stdio.h>

void swap (int *value1, int *value2)
{
	*value1 = *value1 ^ *value2;
	*value2 = *value1 ^ *value2;
	*value1 = *value1 ^ *value2;
}

int main ()
{
	int value1, value2;

	printf ("Enter two Integers : ");
	scanf ("%d %d", &value1, &value2);

	printf ("Before swap, value1 = %d and value2 = %d.\n", value1, value2);
	swap (&value1, &value2);
	printf ("After swap, value1 = %d and value2 = %d.\n", value1, value2);

	return 0;
}
