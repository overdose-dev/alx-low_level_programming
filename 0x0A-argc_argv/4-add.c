#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: function parameter
 * @argv: an array of commands
 *
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (k = 1 ; k < argc ; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
