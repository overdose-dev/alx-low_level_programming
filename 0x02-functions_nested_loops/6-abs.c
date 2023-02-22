#include "main.h"

/**
 * _abs - function that checks for absolute value
 *
 * @s: parameter to be checked
 *
 * Return: always s
 */

int _abs(int s)
{
	if (s < 0)
		s = -(s);
	else if (s >= 0)
		s = s;
	return (s);
}
