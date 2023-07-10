#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Merge 2 strings
 * @s1: first string
 * @s2: second string
 * Return: Merged string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int lenghOfS1, lenghOfS2, lenghtOfStr;

	lenghOfS1 = strlen(s1);
	lenghOfS2 = strlen(s2);
	lenghtOfStr = lenghOfS1 + lenghOfS2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = (char *)malloc(lenghtOfStr + 1);

	if (p == null)
	{
		return (NULL);
	}

	strcpy(p, s1);
	strcpy(p + lenghOfS1, s2);

	return (p);
}
