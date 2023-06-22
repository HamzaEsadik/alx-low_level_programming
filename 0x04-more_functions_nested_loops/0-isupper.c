#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if a character is uppercase
 * @c: character
 * Return: 1 if upper 0 if lower
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
