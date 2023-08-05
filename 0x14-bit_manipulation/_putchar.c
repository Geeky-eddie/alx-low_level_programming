#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - Custom implementation of putchar.
 * @c: The character to be printed.
 *
 * Return: On success, 1 is returned..
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
