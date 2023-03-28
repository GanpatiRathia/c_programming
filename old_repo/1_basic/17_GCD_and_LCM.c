/*
	GCD and LCM (Functions and Recursion)
		Write a C Program to Find the GCD and LCM of Two Integers using Recursion
*/
#include <stdio.h>

int GCD (int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	if (b == 0)
	{
		return a;
	}
	return GCD (b, a % b);
}

int main ()
{
	int x, y;

	printf ("Enter the two Integers to find GCD and LCM of : ");
	scanf ("%d %d", &x, &y);

	int HCF = GCD (x, y);
	int LCM = (x * y) / HCF;

	printf ("GCD = %d and LCM = %d.\n", HCF, LCM);

	return 0;
}
