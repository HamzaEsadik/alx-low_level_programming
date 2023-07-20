#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
	int c = va_arg(args, int);

	printf("%d", c);
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(args);
}
