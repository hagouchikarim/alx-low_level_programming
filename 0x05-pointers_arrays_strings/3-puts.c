#include "main.h"
/**
 * _puts - Prints a string
 * @str: string to print
 * Return: _puts
*/


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

