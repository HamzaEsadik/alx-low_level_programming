#include "main.h"

/**
 * print_square - print_square
 * @size: number
 * Return: null
 */
void print_square(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
