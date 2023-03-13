#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: parameter
 * @argv: array of commands
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
