#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Check the size of some data types
 *
 * Return: null
 */
int main(void)
{
	printf("Size of an char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu byte(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int %zu byte(s)", sizeof(long long int));
	printf("Size of a float %zu byte(s)", sizeof(float));
	return (0);
}
