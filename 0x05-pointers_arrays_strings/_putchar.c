#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: 1 (succesful)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
