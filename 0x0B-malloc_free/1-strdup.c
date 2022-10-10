#include "main.h"

/**
 * _strdup - returns a pointer to a string copy
 * @str: string to be copied
 *
 * Return: pointer to string or null if str is null
 */

char *_strdup(char *str)
{
	char *strc;

	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	len++;



	strc = (char *)malloc(sizeof(char) * len);

	if (strc == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		strc[i] = str[i];
		i++;
	}

	return (strc);
}
