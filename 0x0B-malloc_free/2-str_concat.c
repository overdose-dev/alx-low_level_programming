#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: an array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (1);
}

/**
 * str_concat - concatenates two strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *mlc;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	mlc = (char *) malloc(size * sizeof(char));

	if (mlc == 0)
	{
		return (NULL);
	}
	for (i = 0 ; *(s1 + i) != '\0' ; i++)
		*(mlc + i) = *(s1 + i);

	for (j = 0 ; *(s2 + j) != '\0' ; j++)
	{
		*(mlc + i) = *(s2 + j);
		i++;
	}
	return (mlc);
}
