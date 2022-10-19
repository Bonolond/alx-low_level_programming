#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');
	return (0);
}
