#include <unistd.h>

/**
 * _putchar - Writes a character to the standard outout (stdout)
 * @c: character in focus
 * Return: Success 1
 * If there's error, -1 is returned, and eerrno is set properly
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}      	
