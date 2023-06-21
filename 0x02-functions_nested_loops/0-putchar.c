#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
		putchar('\n');
		return (0);
}
