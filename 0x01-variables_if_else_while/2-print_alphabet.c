#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and follow it by a new line.
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

	putchar('\n');
	return (0);
}

