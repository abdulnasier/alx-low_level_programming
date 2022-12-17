#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function to be the last digit of a number
 *
 * @a: parameter to be entered
 *
 *
 * Return: Always 0
 *
 */

int print_last_digit(int a)
{
	printf("%d", a % 100);
	return (0);
}
