#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: start count from n
 *
 * Return: null
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (n; n >= 98; n--)
	{
		printf("%d, ", n);
	}
}
