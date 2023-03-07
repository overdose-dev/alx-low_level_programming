#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: beginning address of memory to be filled
 * @b: the required value
 * @n: number of bytes
 *
 * Return: array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
