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
	int i;
	char *p;
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= lens2)
	{
		p = (char *)malloc(lens1 + lens2 + 1);
	} else
	{
		p = (char *)malloc(lens1 + n + 1);
	}

	for (i = 0; i < lens1; i++)
	{
		*(p + i) = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		*(p + lens1 + i) = s2[i];
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
