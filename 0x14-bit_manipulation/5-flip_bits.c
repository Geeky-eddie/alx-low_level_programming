#include"main.h"
/**
 * flip_bits - number of bits needed to convert one to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, rate = 0;
	unsigned long int present;
	unsigned long int future = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		present = future >> g;
		if (present & 1)
			rate++;
	}

	return (rate);
}
