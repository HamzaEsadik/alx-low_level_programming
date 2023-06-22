#include "main.h"

/**
 * print_diagonal - print_diagonal n times
 * @n: number
 * Return: null
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
