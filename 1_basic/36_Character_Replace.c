/*
	Character Replace (Pointers)
		Write a C Program to replace a character in a string using pointers
*/
#include <stdio.h>

int main ()
{
	char str[100], *p, old_char, new_char;

	printf ("Enter the String : ");
	scanf ("%[^\n]s", str);
	getchar ();
	printf ("Enter the character to find : ");
	scanf ("%c", &old_char);
	getchar ();
	printf ("Enter the character to replace with : ");
	scanf ("%c", &new_char);

	p = str;
	while (*p != '\0')
	{
		if (*p == old_char)
		{
			*p = new_char;
		}
		p++;
	}

	printf ("After replacing '%c' with '%c' new string is : %s\n", old_char, new_char, str);

	return 0;
}
