#include "main.h"
/**
 * print_rev - Print string in reverse.
 * @s: string
 * Return: streverse
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}

