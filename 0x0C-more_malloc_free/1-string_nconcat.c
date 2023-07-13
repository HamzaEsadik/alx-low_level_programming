#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *p;
	unsigned int lens1 = strlen(s1);
	unsigned int lens2 = strlen(s2);
	int l = lens1 + n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n > lens2)
	{
		n = lens2;
	}

	p = (char *)malloc(lens1 + n + 1);

	for (i = 0; i < lens1; i++)
	{
		*(p + i) = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		*(p + lens1 + i) = s2[i];
	}

	*(p + l) = '\0';

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
