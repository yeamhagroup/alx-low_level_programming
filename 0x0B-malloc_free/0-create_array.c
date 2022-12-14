#include "main.h"

/**
 * create_array - creates an array filled with char
 * @size: is the size of the array
 * @c: character that fills the array
 *
 * Return: a pointer to the array or NULL if it fials
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
