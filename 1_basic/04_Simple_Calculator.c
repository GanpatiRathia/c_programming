/*
	Simple Calculator (Operators and Conditional Statements)
		Write a C program to simulate Simple Calculator (+, -, *, /, %)
*/
#include <stdio.h>

int main ()
{
	char operator;
	int operand1, operand2;

	printf ("Enter the operation you wish to perform (+,-,*,/,%) : ");
	scanf ("%c", &operator);

	printf ("Enter operand-1 and operand-2 : ");
	scanf ("%d %d", &operand1, &operand2);
	switch (operator)
	{
		case '+' : printf ("%d %c %d = %d\n", operand1, operator, operand2, operand1+operand2);
					break;
		case '-' : printf ("%d %c %d = %d\n", operand1, operator, operand2, operand1-operand2);
					break;
		case '*' : printf ("%d %c %d = %d\n", operand1, operator, operand2, operand1*operand2);
					break;
		case '/' : printf ("%d %c %d = %d\n", operand1, operator, operand2, operand1/operand2);
					break;
		case '%' : printf ("%d %c %d = %d\n", operand1, operator, operand2, operand1%operand2);
					break;
		default  : printf ("Unsupported operation\n");
	}

	return 0;
}
