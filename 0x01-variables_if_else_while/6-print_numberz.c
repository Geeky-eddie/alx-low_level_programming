#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
	int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
