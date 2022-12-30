#include "main.h"

/**
 * print_diagonal - function that draws diagonal line
 *
 * @n: function parameter
 *
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');

}
