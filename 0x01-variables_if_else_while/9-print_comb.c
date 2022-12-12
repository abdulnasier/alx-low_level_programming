#include <stdio.h>
#include <unistd.h>

/**
 * main- main function
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else if (i == 9)
			putchar(i + '0');
	}
	return (0); }
