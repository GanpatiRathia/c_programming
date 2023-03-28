/*
	N-th Fibonacci Number (Functions and Recursion)
		Write a C Program to find the Nth Fibonacci Number using Recursion
*/
#include <stdio.h>

int nth_fibonacci (int n)
{
	if (n <= 2)
		return 1;
	return nth_fibonacci (n - 1) + nth_fibonacci (n - 2);
}

int main ()
{
	int N;

	printf ("Which Fibonacci term do you wish to find? ");
	scanf ("%d", &N);

	printf ("%dth Fibonacci (starting from first number as 1) is %d\n", N, nth_fibonacci (N));

	return 0;
}
