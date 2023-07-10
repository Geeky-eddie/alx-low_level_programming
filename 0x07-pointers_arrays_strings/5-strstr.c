#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates the first occurrence of the substring
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
