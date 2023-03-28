/*
	Mean and Mode (Files and Command line arguments)
		Write a C Program to find mean and mode of values in a file
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 1000

void update_mode (long freq[], int uniq[], int last)
{
	long max = 0;
	for (int i = 0; i <= last; ++i)
		if (freq[i] > max)
			max = freq[i];
	for (int i = 0; i <= last; ++i)
		if (freq[i] == max)
			printf (" %d,", uniq[i]);
	printf ("\b \n");
}

int update_freq (long freq[], int uniq[], int data, int last)
{
	int i;
	for (i = 0; i <= last; ++i)
		if (uniq[i] == data)
		{
			freq[i]++;
			return 0;
		}
	uniq[i] = data;
	freq[i]++;
	return 1;
}

int main (int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf ("Parameters missing or Extra parameters!!!\n");
		printf ("Usage : ./a.out <file_name>\n");
		exit (-1);
	}

	char file_name[100];
	strcpy (file_name, argv[1]);

	FILE *file = fopen (file_name, "r");
	if (file == NULL)
	{
		printf ("%s missing or unable to open... Bye...\n", file_name);
		exit (-1);
	}

	int count = 0, data, last = -1;
	double sum = 0, mean;
	long freq[ARR_SIZE] = {0};
	int uniq[ARR_SIZE] = {0};

	while (!feof (file))
	{
		fscanf (file, "%d", &data);
		count++;
		sum += data;
		last += update_freq (freq, uniq, data, last);
	}
	fclose (file);

	if (count)
	{
		mean = sum / count;
		printf ("\n\t\t%d numbers in the given file - %s\n\t\t\tMean = %lf and Mode =", count, file_name, mean);
		update_mode (freq, uniq, last);
	}
	else
		printf ("\n\t\tNo numbers read from file\n");

	return 0;
}

