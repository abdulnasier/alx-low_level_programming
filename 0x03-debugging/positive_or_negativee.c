#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - function to check for positive or negative numbers
 *
 * @i: function parameter
 *
 * Return: Always 0
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative", i);
}
