/*
	Array inside Union (Structures and Unions)
		Write a C Program to implement simple union with an integer and array of two characters, then swap the two characters and print the integer value before and after swapping
*/
#include <stdio.h>

union two
{
	int num;
	char arr[2];
};

int main ()
{
	union two test;

	printf ("Enter the first character : ");
	scanf ("%c", &test.arr[0]);
	getchar ();
	printf ("Enter the second character : ");
	scanf ("%c", &test.arr[1]);
	
	printf ("Before Swap :\n\tNumber is %d\n\tFirst character is \'%c\'\n\tSecond character is \'%c\'\n", test.num, test.arr[0], test.arr[1]);
	char temp = test.arr[0];
	test.arr[0] = test.arr[1];
	test.arr[1] = temp;
	printf ("After Swap :\n\tNumber is %d\n\tFirst character is \'%c\'\n\tSecond character is \'%c\'\n", test.num, test.arr[0], test.arr[1]);

	return 0;
}
