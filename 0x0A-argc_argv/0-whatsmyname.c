#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argument count
 * @argv: array of commands listed
 * Return: 0 always (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
