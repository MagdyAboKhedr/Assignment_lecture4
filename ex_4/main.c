/*
 * main.c
 *
 *  Created on: 25 Oct 2021
 *      Author: magdy
 */

#include "stdio.h"

struct stud{
	char name[100];
	int mark;
	int roll;
};



int main()
{
	struct stud arr[10];
	int i;
	printf("Enter Information of Students\n ");
	fflush(stdout);
	fflush(stdin);
	for(i=0;i<10;i++)
	{
		arr[i].roll=i+1;
		printf("For roll number %d\n", arr[i].roll);
		fflush(stdout);
		fflush(stdin);
		printf("Enter name: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%s", arr[i].name);
		printf("Enter grade: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &arr[i].mark);
	}

	printf("Displaying info of students\n");
	fflush(stdout);
	fflush(stdin);
	for(i=0;i<10;i++)
	{
		printf("For roll number: %d\n",i+1);
		fflush(stdout);
		fflush(stdin);
		printf("Name: ");
		puts(arr[i].name);
		fflush(stdout);
		fflush(stdin);
		printf("Mark:%d\n", arr[i].mark);
		fflush(stdout);
		fflush(stdin);
	}
}
