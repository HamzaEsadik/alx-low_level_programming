#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point.
  * @argc: number.
  * @argv: pointer.
  *
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int (*xf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	xf = get_op_func(argv[2]);

	if (!xf)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", xf(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
