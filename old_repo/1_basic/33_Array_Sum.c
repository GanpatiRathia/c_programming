/*
	Array Sum (Pointers)
		Write a C Program to Calculate the Sum of the Array Elements using Pointer
*/
#include <stdio.h>

int main ()
{
	int arr[100], size;
	long sum = 0;

	printf ("Enter Array Size : ");
	scanf ("%d\n", &size);

	printf ("Enter Array elements :\n");
	for (int i = 0, *p = arr; i < size; i++, p++)
	{
		scanf ("%d", &arr[i]);
		printf ("pointer pointing at address : %X\n", p);
		sum += *p;
	}

	printf ("Sum of Array : %li\n", sum);

	return 0;
}
