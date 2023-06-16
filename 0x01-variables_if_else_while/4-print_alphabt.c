#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets except q and e
 *
 * Return: null
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
