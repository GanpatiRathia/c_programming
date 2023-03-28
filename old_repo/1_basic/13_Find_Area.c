/*
Find Area (Functions and Recursion)
	Write a C Program to implement user-defined find_area() function to find the area of different Geometrical Figures like triangle, circle
*/
#include <stdio.h>

double find_area_circle ()
{
	float radius;

	printf ("Enter Radius of circle : ");
	scanf ("%f", &radius);

	return ((22 * radius * radius) / 7);
}

double find_area_triangle ()
{
	float base, height;

	printf ("Enter Base of triangle : ");
	scanf ("%f", &base);
	printf ("Enter Height of triangle : ");
	scanf ("%f", &height);

	return (base * height / 2);
}

double find_area_rectangle ()
{
	float length, breadth;

	printf ("Enter Length of rectangle : ");
	scanf ("%f", &length);
	printf ("Enter Breadth of rectangle : ");
	scanf ("%f", &breadth);

	return (length * breadth);
}

double find_area_square ()
{
	float length;

	printf ("Enter Length of square : ");
	scanf ("%f", &length);

	return (length * length);
}

double find_area_trapezium ()
{
	float distance, parallel_a, parallel_b;

	printf ("Enter Parallel Side A : ");
	scanf ("%f", &parallel_a);
	printf ("Enter Parallel Side B : ");
	scanf ("%f", &parallel_b);
	printf ("Enter Distance bewteen A & B : ");
	scanf ("%f", &distance);

	return ((parallel_a + parallel_b) * distance / 2);
}

int main ()
{
	double area;
	int choice;

	printf (" 1. Circle\n");
	printf (" 2. Triangle\n");
	printf (" 3. Rectangle\n");
	printf (" 4. Square\n");
	printf (" 5. Trapezium\n");
	printf ("Enter choice of figure : ");
	scanf ("%d", &choice);

	switch (choice)
	{
		case 1 : area = find_area_circle ();
				break;
		case 2 : area = find_area_triangle ();
				break;
		case 3 : area = find_area_rectangle ();
				break;
		case 4 : area = find_area_square ();
				break;
		case 5 : area = find_area_trapezium ();
				break;
		default: printf ("Invalid Choice.\n");
				return 0;
	}

	printf ("The area of this figure is %0.4lf.\n", area);

	return 0;
}
