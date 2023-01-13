#include "main.h"

/**
 * puts2 - function to print other characters
 * @str: function parameter
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
