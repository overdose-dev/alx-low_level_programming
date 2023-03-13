#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: function parameter
 * @argv: an array of commands
 *
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
