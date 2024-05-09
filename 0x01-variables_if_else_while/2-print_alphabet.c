#include <stdio.h>
/**
 * main - our entry point to create random letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
