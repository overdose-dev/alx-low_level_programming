#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: character
 * Return: 0 if successful
 */

char *_strdup(char *str)
{
	char *v;
	int s, y = 0;

	if (str == NULL)
		return (NULL);

	s = 0;
	while (str[s] != '\0')
		s++;

	v = malloc(sizeof(char) * (s + 1));

	if (v == NULL)
		return (NULL);

	for (y = 0 ; str[y] ; y++)
		v[y] = str[y];

	return (v);
}
