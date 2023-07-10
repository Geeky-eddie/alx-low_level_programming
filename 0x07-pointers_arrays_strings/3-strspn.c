#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string of acceptable characters.
 *
 * Return: Number of bytes in the initial segment of @s consisting only of
 *         bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s != '\0')
	{
		found = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
			i++;
		}
		if (found == 0)
		{
			break;
		}
		s++;
	}
	return (count);
}
