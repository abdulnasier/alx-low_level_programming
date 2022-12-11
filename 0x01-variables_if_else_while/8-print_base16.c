#include <stdio.h>
#include <unistd.h>

/**
 * main - main function
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char c;
	int d = 0;

	while (d < 9)
	{
		putchar(d + '0');
		d++
	}
	for (c = 'a' ; c < 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
