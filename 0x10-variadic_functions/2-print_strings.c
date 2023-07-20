#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string in between
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *ss = va_arg(args, char*);

		if (ss == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", ss);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
