#include "main.h"

/**
*create_array - create array of size size and assign char c
*@size: size of array
*@c: Char
*Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}

array = (char *)malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL); /* Memory allocation failed */
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

