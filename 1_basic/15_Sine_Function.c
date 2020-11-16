/*
	Sine Function (Functions and Recursion)
		Write a C Program to implement user-defined sin(x) function
*/
#include <stdio.h>

long double sine (float degree, int limit)
{
	float radian = (degree * 22) / (180 * 7);
	long double sin, term;
	sin = term = radian;

	for (int i = 1; i < limit; i++)
	{
		term = -term * (radian * radian) / ((2 * i) * (2 * i + 1));
		sin += term;
	}

	return sin;	
}

int main ()
{
	float degree;
	int limit;

	printf ("Enter degree to find sine for : ");
	scanf ("%f", &degree);
	printf ("Enter term to limit till : ");
	scanf ("%d", &limit);

	printf ("sine(%0.2f degree) = %0.60Lf\n", degree, sine (degree, limit));

	return 0;
}
