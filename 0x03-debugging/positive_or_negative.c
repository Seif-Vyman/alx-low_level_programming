#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - check if number is positive or nigative or 0
 * @n: takse input from user
 * Return: void
 */

void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		 printf("%d is negative\n", n);
}