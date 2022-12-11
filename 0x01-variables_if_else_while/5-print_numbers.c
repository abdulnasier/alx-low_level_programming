#include <stdio.h>
#include <unistd.h>

/**
 * main -main function
 *
 * Return: Alaways 0
 *
 */

int main(void)
{
	char z;

	for (z = '0' ; z < '10' ; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
