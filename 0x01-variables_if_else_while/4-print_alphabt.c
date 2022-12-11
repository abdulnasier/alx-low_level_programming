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
	char z;

	for (z = 'a' ; z <= 'z' ; z++)
	{
		if (z == 'q' || z == 'e')
			continue;
		putchar(z);
	}
	putchar('\n');
	return (0);
}
