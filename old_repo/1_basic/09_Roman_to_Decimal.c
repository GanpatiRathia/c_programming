/*
	Roman to Decimal (Control Statements)
		Write a C Program to Convert Roman Number to Decimal Number
*/
#include <stdio.h>

int roman_digit (char c)
{
	switch (c)
	{
		case 'I' : return 1;
		case 'V' : return 5;
		case 'X' : return 10;
		case 'L' : return 50;
		case 'C' : return 100;
		case 'D' : return 500;
		case 'M' : return 1000;
		case '\0': return 0;
		default  : return -1;
	}
}

int main ()
{
	char roman[50];

	printf ("Enter the roman number (I, V, X, L, C, D, M) : ");
	scanf ("%s", roman);

	int i;
	int decimal_num = 0;
	int repeat = 1;
	int current_digit, prev_digit, next_digit;
	int polarity_change = 0;

	for (i = 0; roman[i] != '\0'; i++)
	{
		if (roman[i] == roman[i + 1])
			repeat++;
		else
			repeat = 1;

		if (repeat == 4)
			break;

		current_digit = roman_digit (roman[i]);
		next_digit = roman_digit (roman[i + 1]);
		prev_digit = roman_digit (roman[i - 1]);
		if (current_digit == -1)
			break;

		if (current_digit < next_digit)
		{
			if (prev_digit <= current_digit || roman[i + 1] == roman[i + 2])
				break;
			if (((next_digit / current_digit) <= 10) && !polarity_change)
			{
				polarity_change = 1;
				decimal_num -= current_digit;
			}
			else
				break;
		}
		else
		{
			polarity_change = 0;
			decimal_num += current_digit;
		}
	}

	if (roman[i] != '\0')
		printf ("Invalid Roman Number.\n");
	else
		printf ("%s = %d\n", roman, decimal_num);

	return 0;
}
