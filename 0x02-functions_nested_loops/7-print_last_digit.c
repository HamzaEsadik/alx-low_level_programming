#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @i: last digit
 *
 * Return: null
 */
int print_last_digint (int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;
	_putchar(n);
	return (n);
}
