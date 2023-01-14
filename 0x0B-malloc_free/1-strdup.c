#include "main.h"

/**
 * _strdup - function that allocates space in memory
 * @str: function parameter
 * Return: newly allocated sapce on success and NULL on failure
 */


char *_strdup(char *str)
{
	char *z;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	z = (char *)malloc(sizeof(char) * (i + 1));
	if (z == NULL)
		return (NULL);
	for (j = 0 ; j <= i ; j++)
		z[j] = str[j];
	return (z);
}
