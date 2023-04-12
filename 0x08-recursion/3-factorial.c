#include "main.h"

/**
 * factorial - Function tht returns the factorial of a given number
 * @n: number returning factorial
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
