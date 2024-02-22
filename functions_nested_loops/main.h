#include <unistd.h>

/**
 * _putchar - prints out characters
 *prototypes for functions
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

