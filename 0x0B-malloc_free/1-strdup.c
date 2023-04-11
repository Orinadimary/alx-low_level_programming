#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that allocates memory to new pointer
 * @str: char
 * Return: NULL
 */
char *_strdup(char *str)

{
	char *jjj;

	int i, n = 0;

	if (str == 0)
		return (0);

	i = 0;

	while (str[i] != '\0')

		i++;

	jjj = malloc(sizeof(char) * (i + 1));

	if (jjj == NULL)

		return (NULL);

	for (n = 0; str[n]; n++)

		jjj[n] = str[n];
	return (jjj);

}
