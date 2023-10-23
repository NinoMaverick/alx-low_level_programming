#include "main.h"
/**
 * _strstr - Start point
 * @haystack: first input
 * @needle: first input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *o = needle;

		while (*n == *o && *o != '\0')
		{
			n++;
			o++;
		}

		if (*o == '\0')
			return (haystack);
	}
	return (0);
}
