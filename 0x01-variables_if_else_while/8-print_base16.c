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
	int x;
	char z;

	for (x = 0 ; x < 16 ; x++)
	{
		if (x == 10)
			putchar('a');
		else if (x == 11)
			putchar('b');
		else if (x == 12)
			putchar('c');
		else if (x == 13)
			putchar('d');
		else if (x == 14)
			putchar('e');
		else if (x == 15)
			putchar('f');
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
