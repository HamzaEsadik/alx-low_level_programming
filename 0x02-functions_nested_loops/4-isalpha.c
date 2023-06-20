#include "main.h"
#include <unistd.h>

/**
 * _isalpha - check if a character is alphabet
 *
 * @c: the character checked
 *
 * Return: null
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
