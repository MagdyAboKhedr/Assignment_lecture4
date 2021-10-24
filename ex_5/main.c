/*
 * main.c
 *
 *  Created on: 25 Oct 2021
 *      Author: magdy
 */
#include "stdio.h"

#define PI 3.14
#define area(r)(PI*(r)*(r))

int main()
{
	float radius, res;
	printf("Enter radius: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &radius);
	res=area(radius);
	printf("Area=%.2f", res);
}
