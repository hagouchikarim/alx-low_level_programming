#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,and then in uppercase and follow it by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

