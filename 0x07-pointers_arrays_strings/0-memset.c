#include"main.h"
/**
 * _memset - memset function
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to fill.
 *
 * Return: s is success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}
	return (s);
}
