#include "main.h"


/**
 * argstostr - A function that concatenates all arguments of your program at run time
 * @auc: number of arguments passed
 * @av: array containing arguments passed
 * Return: A pointer to string that containing all arguments
 * or NULL if auc == 0, if av == NULL, or upon failure
 */
char *argstostr(int auc, char **av)
{
	char *new_str;
	int len = 0, i = 0, j, k = 0;

	if (auc <= 0 || av == NULL)
		return (NULL);

	for (; i < auc; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	len++;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < auc; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}

	new_str[k] = '\0';
	return (new_str);
}
