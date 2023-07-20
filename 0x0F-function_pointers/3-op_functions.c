#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a + b
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 * @a: int 1
 * @b: int 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a * b
 * @a: int 1
 * @b: int 2
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b
 * @a: int 1
 * @b: int 2
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a % b
 * @a: int 1
 * @b: int 2
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}

	return (a % b);
}
