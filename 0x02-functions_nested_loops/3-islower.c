#include "main.h"
#include <ctype.h>

/**
 * _islower - check if a character is lower
 *
 * @c: the character that checks
 *
 * Return: null
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
