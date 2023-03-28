/*
	Sum of Digits in String (One dimensional arrays and String)
		Write a C Program to Read a String and find the Sum of all Digits in the String
*/
#include <stdio.h>

int main ()
{
	char str[100];

	printf ("Enter the string including some digits : ");
	scanf ("%[^\n]s", str);

	int sum = 0;
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] > '0' && str[i] <= '9')
			sum += (int)(str[i] - '0');

	printf ("Sum = %d\n", sum);

	return 0;
}
