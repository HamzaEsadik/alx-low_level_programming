nclude "main.h"

/**
 * _strlen - swaps the values
 * @s: string parameter
 * Return: lenght of string
 */
void _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	{
		++counter;
	}
	return (counter);
}
