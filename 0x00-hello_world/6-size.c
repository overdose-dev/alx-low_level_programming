#include <stdio.h>

/**
 * main - main function
 * Return: always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
