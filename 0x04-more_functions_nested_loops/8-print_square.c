#include "main.h"

/**
 * print_square - print_square
 * @size: number
 * Return: null
 */
void print_square(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
