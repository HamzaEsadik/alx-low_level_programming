#include "main.h"

/**
 * main - write a to z 10 times
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
