#include "main.h"

/**
 * puts2 - function in question
 * @str: function that prints every other character of a string
 * Return: Always (0)
 */
void puts2(char *str)
{
	int a;
	int count = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');

}
