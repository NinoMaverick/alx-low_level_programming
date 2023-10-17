#include "main.h"

/**
 * _puts - function that prints a string, followed by new line
 * @param str - String in question
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
