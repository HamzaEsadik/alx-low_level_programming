#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocate memory for an array
 * @size: size of array
 * @c: character initialized in the array
 * Return:array adress or null
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (void *)malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
