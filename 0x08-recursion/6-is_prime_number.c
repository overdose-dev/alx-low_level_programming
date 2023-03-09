#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - returns 1 if integer is a prime number
 * @n: integer
 * check_prime - function that checks for prime numbers
 * Return: 1 if successful, otherwise return 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime numbers
 * @n: parameter
 * @i: integer
 * Return: 1 if successful, otherwise 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
