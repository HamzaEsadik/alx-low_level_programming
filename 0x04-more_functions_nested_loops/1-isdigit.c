#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if a number is digit
 * @c: number
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
