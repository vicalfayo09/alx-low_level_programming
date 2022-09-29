#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: string array
 * @b: constant bytes
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
