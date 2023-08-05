#include "main.h"

/**
 * get_endianness - checks if a machine is endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *g = (char *) &e;

	return (*g);
}
