#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: always  0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
