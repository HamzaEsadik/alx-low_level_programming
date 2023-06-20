#include "main.h"

/**
 * print_sign - print +, - and 0
 *
 * @n: number checked checked
 *
 * Return: null
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
