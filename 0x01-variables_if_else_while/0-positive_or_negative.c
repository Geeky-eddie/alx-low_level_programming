#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function that determines a positive or negative number
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is equal to zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
