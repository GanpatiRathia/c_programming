/*
	Student Structure (Structures and Unions)
		Write a C Program to implement Student structure that stores Roll No, Name, Branch, Year, Sem etc.
*/
#include <stdio.h>

struct student
{
	int year, sem;
	long contact;
	char roll_no[10], name[50], branch[4];
};

void get_student_details (struct student* s)
{
	getchar ();
	printf ("\tRoll Number  : ");
	gets (s->roll_no);
	printf ("\tName         : ");
	gets (s->name);
	printf ("\tBranch (---) : ");
	scanf ("%s", s->branch);
	printf ("\tYear         : ");
	scanf ("%d", &s->year);
	printf ("\tSem          : ");
	scanf ("%d", &s->sem);
	printf ("\tContact      : ");
	scanf ("%li", &s->contact);
	while ((s->contact / 10000000000) || (s->contact / 1000000000 == 0))
	{
		printf ("\t\t\t\tRe-Enter contact correctly\n");
		printf ("\tContact      : ");
		scanf ("%li", &s->contact);
	}
}

void print_student_details (struct student s)
{
	printf ("\tRoll Number : %s\n", s.roll_no);
	printf ("\tName        : %s\n", s.name);
	printf ("\tBranch      : %s\n", s.branch);
	printf ("\tYear        : %d\n", s.year);
	printf ("\tSem         : %d\n", s.sem);
	printf ("\tContact     : %li\n", s.contact);
}

int main ()
{
	int num_students;
	struct student st[100];

	printf ("Enter the number of Students : ");
	scanf ("%d", &num_students);

	for (int i = 0; i < num_students; ++i)
	{
		printf ("\nEnter details for Student %d - \n", i + 1);
		get_student_details (&st[i]);
	}

	for (int i = 0; i < num_students; ++i)
	{
		printf ("\nDetails of Student %d - \n", i + 1);
		print_student_details (st[i]);
	}

	return 0;
}
