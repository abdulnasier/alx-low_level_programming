#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: function paramter
 * @c: function parameter
 * Return: pointer to the address if successfull and returns NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i;

	if (size == 0)
	{
		Return(NULL);
	}
	z = malloc(sizeof(c) * size);
	else if (z == NULL)
		Return(NULL);
	for (i = 0 ; i < size ; i++)
		z[i] = c;
	Return(z);
}
