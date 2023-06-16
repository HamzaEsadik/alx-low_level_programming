#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lower and uppercase
 *
 * Return: null
 */
int main(void)
{
	char i;
	char d;

	for (i = 'a'; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
