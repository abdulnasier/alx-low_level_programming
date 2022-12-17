#include "main.h"
#include <stdio.h>
/**
 * _abs - function to get absolute value
 *
 * @a: function parameter
 *
 * Return: Always 0
 *
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		printf("%d", a);
	}
	else
		printf("%d", a);
	return (0);
}
