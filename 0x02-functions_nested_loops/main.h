#ifndef HEADER_FILE
#define HEADER_FILE
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
