#include "main.h"
#include <stdio.h>

/**
 * print_rev - this function prints a reverse string, followed by a new line
 *
 * @s: this is the string to be printed
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
