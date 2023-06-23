#include <stdio.h>

/**
 * main - entry point
 * print numbers from 0 to 100
 * instead of multi 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			printf(" ");
		} else
		{
			printf("\n");
		}
	}
	return (0);
}
