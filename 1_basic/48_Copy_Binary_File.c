/*
	Copy Binary File (Files and Command line arguments)
		Write a C Program to copy a binary file
*/
#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
	FILE *file, *copy;
	void *ptr;

	if (argc < 3)
	{
		printf ("Invalid arguments, use : executable orig_filename new_filename\n");
		return 1;
	}

	char original_file[strlen (argv[1])], copy_file[strlen (argv[2])];
	strcpy (original_file, argv[1]);
	strcpy (copy_file, argv[2]);

	// copying to a new file
	file = fopen (original_file, "r");
	copy = fopen (copy_file, "w");
	printf("Read\n");
	while (file->eof())
	{
		fread (ptr, 1, 1, file);
		printf("Read\n");
		fwrite (ptr, 1, 1, copy);
	}
	fclose (file);
	fclose (copy);

	return 0;
}
