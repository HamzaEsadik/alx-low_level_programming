#include "main.h"

/**
 * int _strlen_recursion - lentgh of a string
 * @s: arg
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (s[lenght] == '\0')
	{
		return (0);
	}
	return (1) + _strlen_recursion(s + 1);
}
