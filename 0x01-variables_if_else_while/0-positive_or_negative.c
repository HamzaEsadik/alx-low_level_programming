#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: assign a random number to the variable n and print
 * whether the number stored in the variable n is positive or negative.
 *
 * Return: null
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("is positive\n");
	}
	else if (n == 0)
	{
		puts("is zero\n");
	}
	else
	{
		puts("is negative\n");
	}
	return (0);
}
