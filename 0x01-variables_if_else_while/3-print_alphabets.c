#include <stdio.h>
#include <unistd.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	char z, y;

	for (z = 'a' ; z <= 'z' ; z++)
		putchar(z);
	for (y = 'A' ; y <= 'Z' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
