#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print Alphabets
 *
 * Return: null
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
