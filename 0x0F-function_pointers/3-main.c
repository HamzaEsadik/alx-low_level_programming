#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - operations
  * @argc: number of args
  * @argv: pointer to the args
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int (*fx)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fx = get_op_func(argv[2]);

	if (!fx)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fx(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
