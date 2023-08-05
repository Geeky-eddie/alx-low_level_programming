#include "main.h"
#include <stdio.h>
#define CHAR_BIT 8
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary representation.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * CHAR_BIT - 1);
int printthe_flag = 0;

while (mask > 0)
{
if (n & mask)
{
putchar('1');
printthe_flag = 1;

}
else if (printthe_flag)
{
putchar('0');
}

mask >>= 1;
}

if (!printthe_flag)
putchar('0');
}
