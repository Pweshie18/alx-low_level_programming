#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator sum of 2 numbers
 * @a: first int
 * @b: second int
 * Return: addition of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator of 2 numbers
 * @a: first int
 * @b: second int
 * Return: difference of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product operator of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
