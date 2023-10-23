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
	int n;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	n = (length - 1) / 2;

	for (a = n + 1; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');

}

