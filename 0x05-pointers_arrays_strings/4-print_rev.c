#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 *
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	for (a = a - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
