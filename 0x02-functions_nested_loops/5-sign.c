#include "main.h"

/**
 * print_sign - Print the sign of a number.
 * @n: type int integer, can be negative or positive.
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int n)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}

