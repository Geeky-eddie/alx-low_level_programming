#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
