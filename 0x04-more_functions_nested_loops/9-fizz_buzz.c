#include <stdio.h>
#include <unistd.h>

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
			putchar(i + '0');
		putchar(' ');
	}
	return (0);
}
