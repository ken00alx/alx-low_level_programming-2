#include "main.h"
/**
 * strdup -function to copy and from str to new_str
 *
 * @str: string to be copied
 * Return: return the newly created string
 */
char *_strdup(char *str)
{
	int i, j, l = strlen(str);
	char *new_str;

	if (str == NULL)
		return (NULL);
	i = 1;
	while (str[i])
	{
		new_str = malloc(sizeof(char) * l);
		i++;
	}
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		new_str[j] = str[j];
		j++;
	}
	return (new_str);
}
