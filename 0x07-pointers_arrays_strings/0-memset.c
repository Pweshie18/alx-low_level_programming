#include "main.h"


/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: memory area pointed to by s
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
