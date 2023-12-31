#include "main.h"

/**
 * times_table - times table from 0 to 9
 *
 * Return: null
 */
void times_table(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			int c = i * n;

			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				if (n != 0)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
