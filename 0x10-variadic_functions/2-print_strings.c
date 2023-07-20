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
	char *str;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}

		va_end(args);
	}

	printf("\n");
}
