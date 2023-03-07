#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring
 *  @s: input
 *  @accept: input
 *
 *  Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int n;

	while (*s)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (*s == accept[n])
			{
				l++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (l);
}
