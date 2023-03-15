#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to newly allocated space in memory containing concatenated
 * string, or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}

	concat[i] = '\0';

	return (concat);
}
