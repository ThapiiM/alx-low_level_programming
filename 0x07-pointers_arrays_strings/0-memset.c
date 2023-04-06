#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Initial memory address to be filled
 * @b: Desired value
 * @n: Number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
