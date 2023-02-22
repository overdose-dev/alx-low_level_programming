#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @a: function parameter
 *
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	return (b);
}
