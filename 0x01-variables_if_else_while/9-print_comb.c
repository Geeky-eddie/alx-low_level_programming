#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
	int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
