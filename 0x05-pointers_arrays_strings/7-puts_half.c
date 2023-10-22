#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str : function type
 * Return : Always (0)
 */
void puts_half(char *str)
{
	int a;
	int length = 0;
	int n = (length_of_the_string - 1) / 2;

	for (a = n; a < length; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');

}

