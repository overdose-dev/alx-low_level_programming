#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Description: Print laast digit of a random number
 * Return: Always 0 if (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
		printf("\n");
	return (0);
}
