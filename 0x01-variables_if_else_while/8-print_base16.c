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
	char s;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (s = 'A'; s < 'G'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
