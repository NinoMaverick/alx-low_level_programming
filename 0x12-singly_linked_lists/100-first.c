#include <stdio.h>

/**
 * fmain - function executed before main
 * Return: nothing
 */
void _attribute_((constructor)) fmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
