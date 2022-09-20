#include "main.h"
#include <stdio.h>

/**
 * _puts - writes a function that prints a string, followed by a new line,
 * to stdout
 * @str: this is my input string
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
