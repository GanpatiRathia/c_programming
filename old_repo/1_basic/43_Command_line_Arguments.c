/*
	Command line Arguments (Files and Command line arguments)
		Write a C program to display each and every command line argument
*/
#include <stdio.h>

int main (int argc, char const *argv[])
{
	printf ("\tA total of %d command line arguments were entered as follows :\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf ("\t\t%d. %s\n", i, argv[i]);
	}

	return 0;
}
