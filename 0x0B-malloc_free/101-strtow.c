#include <stdlib.h>
#include "main.h"

/**
 * count_word -  count the number of words
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else
			if (flag == 0)
			{
				b++;
			}
	}
	return (b);
}
/**
 * strtow - splits a string
 * @str: string to split
 * Return: an array of strings (Success)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;

	int i, n = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)

					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - c;
				n++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[n] = NULL;
	return (matrix);
}
