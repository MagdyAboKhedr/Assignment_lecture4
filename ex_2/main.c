/*
 * main.c
 *
 *  Created on: 9 Oct 2021
 *      Author: magdy
 */

#include "stdio.h"

struct length
{
	float inch;
	int feet;
};

struct length add(struct length s1, struct length s2)
{
	struct length res;
	res.feet = s1.feet + s2.feet;
	res.inch = s1.inch + s2.inch;
	if(res.inch>12)
	{
		res.inch = res.inch - 12.0;
		++res.feet;
		return res;
	}
	else
	{
		return res;
	}
}

struct length read()
{
	struct length dummy;
	printf("Enter feet: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &dummy.feet);
	printf("Enter inch: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &dummy.inch);
	return dummy;
}

void print(struct length dummy)
{
	printf("Sum of distances=%d'-%.1f\"", dummy.feet,dummy.inch);
}

int main()
{
	struct length x, y, res;
	x = read();
	y = read();
	res = add(x,y);
	print(res);
}

