/*
	Case Change (One dimensional arrays and String)
		Write a C Program to change case of all characters (upper to lower or lower to upper) in a given string
*/
#include <stdio.h>

int main ()
{
	char a[100];
	int difference = (int)('a' - 'A');

	printf ("Enter the string : ");
	scanf ("%[^\n]s", a);

	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = (char)(a[i] - difference);
		else
			if (a[i] >= 'A' && a[i] <= 'Z')
				a[i] = (char)(a[i] + difference);
	}

	printf ("Case Changed string is : %s\n", a);

	return 0;
}
