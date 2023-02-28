#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: input parameter
 *
 * Return: print result
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0' ; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
