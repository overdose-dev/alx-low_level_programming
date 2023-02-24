#include "main.h"

/**
 * print_most_numbers - function that prints numbers
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		if (i != 2)
		{
			if (i != 4)
			{
				_putchar(i + '0');
			}
		}
	}

	_putchar('\n');
}
