#include "main.h"

/**
 * *_strcpy - takes a pointer to an int
 * @dest: char type string
 * @src: char type string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
