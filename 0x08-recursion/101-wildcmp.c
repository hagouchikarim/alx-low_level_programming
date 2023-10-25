#include "main.h"

/**
 * wildcmp - Compare two  strings
 * @c1: Pointer
 * @c2: Pointer
 * Return: void
 */

int wildcmp(char *c1, char *c2)
{
	if (*c1 == '\0')
	{
		if (*c2 != '\0' && *c2 == '*')
		{
			return (wildcmp(c1, c2 + 1));
		}
		return (*c2 == '\0');
	}

	if (*c2 == '*')
	{
		return (wildcmp(c1 + 1, c2) || wildcmp(c1, c2 + 1));
	}
	else if (*c1 == *c2)
	{
		return (wildcmp(c1 + 1, c2 + 1));
	}
	return (0);
}

