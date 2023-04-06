#include "main.h"

/**
 * _strchr - Function locates a character in a string
 * @s: Input string
 * @c: Input value
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
