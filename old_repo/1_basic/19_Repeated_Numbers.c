/*
	Repeated Numbers (One dimensional arrays and String)
		Write a C Program to Print All the Repeated Numbers with Frequency in an Array of integers
*/
#include <stdio.h>

int main ()
{
	int array[100], index_array[100], freq[100] = {0};
	int size;

	printf ("Enter the size of Array : ");
	scanf ("%d", &size);

	printf ("Enter Array Elements : \n");
	for (int i = 0; i < size; ++i)
		scanf ("%d", &array[i]);

	int index_in = 0, flag;
	for (int i = 0; i < size; ++i)
	{
		flag = 0;

		for (int j = 0; j < index_in; ++j)
		{
			if (array[i] == index_array[j])
			{
				flag = 1; // Repeated element
				freq[j]++;
			}
		}

		if (!flag)
		{
			index_array[index_in] = array[i];
			freq[index_in] = 1;
			index_in++;
		}
	}

	for (int i = 0; i < index_in; ++i)
	{
		if (freq[i] > 1)
		{
			printf ("%d (%d)\n", index_array[i], freq[i]);
		}
	}

	return 0;
}
