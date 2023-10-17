#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: character string that would be reversed
 * start - String starting point
 * end - String ending point
 * length - shows length of string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];

		s[end] = temp;

		start++;
		end--;
	}
}
