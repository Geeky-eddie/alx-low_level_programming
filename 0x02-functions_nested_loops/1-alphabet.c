#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - another entry point
 * main - entry point
 * main - entry2
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}
void print_alphabet(void)
{
	char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
