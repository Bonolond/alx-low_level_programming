#include "main.h"
#include <unistd.h>

/**
 * _putchar - writesbthe character c
 * @c: the character to print
 *
 * Returns: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
