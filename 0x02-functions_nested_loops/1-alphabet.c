#include <main.h>

/**
 * print_alphabet - func name
 *
 * Description: print  alphabets a to z
 *
 * Return: null
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
}

/**
 * main - main fuction
 *
 * Description: print  _putchar
 *
 * Return: null
 */
int main(void)
{
	print_alphabet();
	return (0);
}
