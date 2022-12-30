#include <stdio.h>
#include "main.h"

/**
 * main - function that takes main program
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			_putchar(i + '0');
		_putchar(' ');
	}
	return (0);
}
