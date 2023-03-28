/*
	Largest and Smallest (One dimensional arrays and String)
		Write a C Program to Find the Largest and Smallest Numbers in an Array of integers
*/
#include <stdio.h>

int main ()
{
	int array[100];
	int size, smallest, largest;

	printf ("Enter the size of Array : ");
	scanf ("%d", &size);

	if (size)
	{
		printf ("Enter Array Elements : \n");
		scanf ("%d", &array[0]);

		smallest = largest = array[0];
		for (int i = 1; i < size; i++)
		{
			scanf ("%d", &array[i]);

			if (array[i] > largest)
				largest = array[i];
			else
				if (array[i] < smallest)
					smallest = array[i];
		}

		printf ("Smallest = %d and Largest = %d.\n", smallest, largest);
	}
	else
		printf ("Entered Array Size is Invalid.\n");

	return 0;
}
