#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to char params
 * @b: value
 * @n: number of bytes
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

