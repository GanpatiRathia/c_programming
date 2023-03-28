/*
	Quadratic Roots (Operators and Conditional Statements)
		Write a C program for finding roots (in 2 decimal point precision) of a quadratic equation.
*/
#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b, c;

	printf ("Enter a, b, c (for your quadratic equation : a(x^2) + b(x) + c = 0) : ");
	scanf ("%d %d %d", &a, &b, &c);

	printf ("The roots for %d(x^2) + %d(x) + %d = 0 are ", a, b, c);

	long discriminant = (b * b) - (4 * a * c);
	if (discriminant >= 0)
	{
		printf ("REAL : \n");
		float root1, root2;
		root1 = (-b + sqrt (discriminant)) / (2 * a);
		root2 = (-b - sqrt (discriminant)) / (2 * a);
		printf ("x1 = %0.2f and x2 = %0.2f.\n", root1, root2);
	}
	else
	{
		printf ("IMAGINARY :\n");
		float root_real, root_img;
		root_real = -b / (2 * a);
		root_img = sqrt (-discriminant) / (2 * a);
		printf ("x1 = %0.2f + i(%0.2f)\nx2 = %0.2f - i(%0.2f).\n", root_real, root_img, root_real, root_img);
	}

	return 0;
}
