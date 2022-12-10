#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %d byte(s)", sizeof(d));
	printf("size of an int: %d byte(s)", sizeof(a));
	printf("size of a long int: %d byte(s)", sizeof(b));
	printf("size of a long long int: %d byte(s)", sizeof(c));
	printf("size of a float: %d byte(s)", sizeof(f));
	return (0);
}
