/*
	Contact Structure - Phone Search (Structures and Unions)
		Write a C Program for implement Phone number search with each contact structure having Name and phone number then display phone number of matching contact name
*/
#include <stdio.h>
#include <string.h>

struct contact
{
	long contact;
	char name[50];
};

void get_contact_details (struct contact* s)
{
	getchar ();
	printf ("\tName         : ");
	gets (s->name);
	printf ("\tContact      : ");
	scanf ("%li", &s->contact);
	while ((s->contact / 10000000000) || (s->contact / 1000000000 == 0))
	{
		printf ("\t\t\t\tRe-Enter contact correctly\n");
		printf ("\tContact      : ");
		scanf ("%li", &s->contact);
	}
}

void print_contact_details (struct contact s)
{
	printf ("\t %s : %li\n", s.name, s.contact);
}

int main ()
{
	int num_Contacts, i, count = 0;
	char search_Contact[50];
	struct contact ct[100];

	printf ("Enter the number of Contacts : ");
	scanf ("%d", &num_Contacts);

	for (int i = 0; i < num_Contacts; ++i)
	{
		printf ("\nEnter details for Contact %d - \n", i + 1);
		get_contact_details (&ct[i]);
	}

	getchar ();
	printf ("\nEnter the Contact name to search for : ");
	gets (search_Contact);

	for (i = 0; i < num_Contacts; ++i)
	{
		if (strcasestr (ct[i].name, search_Contact))
		{
			count ++;
			printf ("\nMatching Contact found as follows :\n");
			print_contact_details (ct[i]);
		}
	}

	for (i++; i < count; ++i)
	{
		if (strcasestr (ct[i].name, search_Contact))
		{
			count ++;
			print_contact_details (ct[i]);
		}
	}

	if (!count)
		printf ("\nSearched contact not found !!!\n");

	return 0;
}
