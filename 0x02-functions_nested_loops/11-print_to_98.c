#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: start count from n
 *
 * Return: null
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
		} else
		{
			printf("%d, ", n);
		}
	}
	for (; n >= 98; n--)
	{
		printf("%d, ", n);
	}
}
