#include "main.h"

/**
 * _memset - fills memory with a particular value
 * @s: starting address
 * @d: the desired value
 * @n: number of bytes to be changed
 * Return: modified array with new value for n bytes
 */
char *_memset(char *s, char d, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = d;
		n--;
	}
	return (s);
}

