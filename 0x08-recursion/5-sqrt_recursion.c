#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 * @start: The starting point for searching the square root.
 * @end: The ending point for searching the square root.
 *
 * Return: The natural square root of n, or -1 if n does not.
 */
int square_root_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
if (n == 0 || n == 1)
	return (n);
return (square_root_helper(n, 1, n));
}
/**
 * square_root_helper - Recursive helper function to find the square.
 * @n: The number to find the square root for.
 * @start: The starting point for searching the square root.
 * @end: The ending point for searching the square root.
 *
 * Return: The square root of n, or -1 if n does not.
 */
int square_root_helper(int n, int start, int end)
{
int mid;
if (start <= end)
{
mid = (start + end) / 2;
	if (mid *mid == n)
		return (mid);
	if (mid *mid < n)
		return (square_root_helper(n, mid + 1, end));
	return (square_root_helper(n, start, mid - 1));
}
return (end);
}
