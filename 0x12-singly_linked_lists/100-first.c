#include <stdio.h>

void msg(void)__attribute__((constructor));

/**
 * msg - a function that prints a specific message
 *
 * Return: no return
 */
void msg(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
