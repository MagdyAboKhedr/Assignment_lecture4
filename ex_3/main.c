/*
 * main.c
 *
 *  Created on: 9 Oct 2021
 *      Author: magdy
 */


#include "stdio.h"

struct complex
{
	float real;
	float img;
};

struct complex read()
{
	struct complex dummy;
	printf("Enter real part: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &dummy.real);
	printf("Enter imaginary part: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &dummy.img);
	return dummy;
}

struct complex add(struct complex x, struct complex y)
{
	struct complex res;
	res.real = x.real + y.real;
	res.img = x.img + y.img;
	return res;
}

void display(struct complex dummy)
{
	printf("result=%.2f+%.2fi", dummy.real, dummy.img);
}

int main()
{
	struct complex x, y, res;
	x=read();
	y=read();
	res = add(x,y);
	display(res);
}
