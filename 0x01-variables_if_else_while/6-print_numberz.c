#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print digit numbers of base 10
 *
 * Return: null
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
