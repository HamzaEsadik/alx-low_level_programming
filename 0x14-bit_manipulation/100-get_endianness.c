#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p;

	p = (char *)&i;
	if (*p)
		return (i);
	else
		return (0);
}
