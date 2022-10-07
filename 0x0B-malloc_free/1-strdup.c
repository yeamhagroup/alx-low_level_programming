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

	while (str[len])
	{
		len++;
	}

	len++;

	if (str == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}

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
