#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: where memory is stored
 * @src: where memory is copied from
 * @n: the number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j = 0;

	for (; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
