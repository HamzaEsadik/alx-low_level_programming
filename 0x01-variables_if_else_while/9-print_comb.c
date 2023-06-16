#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers 0 to 9 separated by comma
 *
 * Return: null
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
