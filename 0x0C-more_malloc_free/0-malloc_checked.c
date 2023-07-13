#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: space allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = (void *)malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
