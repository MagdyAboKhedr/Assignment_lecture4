/*
 * main.c
 *
 *  Created on: 9 Oct 2021
 *      Author: magdy
 */
#include "stdio.h"

struct Sstudent
{
	char Sname[100];
	int Sroll;
	float Smark;
};

struct Sstudent storeS()
{
	struct Sstudent x;

	printf("Enter information of students:\n ");
	fflush(stdout);
	fflush(stdin);

	printf("Enter Student name: \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%s", x.Sname);

	printf("Enter Student roll: \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &x.Sroll);

	printf("Enter Student mark: \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &x.Smark);

	return x;
}

void display(struct Sstudent x)
{
	printf("Displaying Information: \n");
	fflush(stdout);
	fflush(stdin);
	printf("Name: %s\n", x.Sname);

	fflush(stdout);
	fflush(stdin);
	printf("Roll: %d\n", x.Sroll);

	fflush(stdout);
	fflush(stdin);
	printf("Mark: %f\n", x.Smark);
}

int main()
{
	struct Sstudent S1;
	S1 = storeS();
	display(S1);
}

