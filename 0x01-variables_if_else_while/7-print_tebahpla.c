#include <stdio.h>

/**
 * main - pritns the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
