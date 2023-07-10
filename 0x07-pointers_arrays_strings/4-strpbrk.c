#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence of any byte from accept in s.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of acceptable bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
