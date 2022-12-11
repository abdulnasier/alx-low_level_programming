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
	int z;

	for (z = 0 ; z < 10 ; z++)
		printf("%d", z);
	putchar('\n');
	return (0);
}
