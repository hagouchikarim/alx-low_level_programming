#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}

