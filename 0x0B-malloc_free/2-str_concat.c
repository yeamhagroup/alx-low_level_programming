#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a string that containes the two strings or NULL when it fials
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}
