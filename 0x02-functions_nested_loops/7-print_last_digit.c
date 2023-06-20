#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @i: last digit
 *
 * Return: null
 */
int print_last_digit (int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;
	_putchar(n + '0');
	return (n);
}
