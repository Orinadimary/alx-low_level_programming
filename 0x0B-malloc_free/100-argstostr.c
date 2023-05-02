#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer  input
 * @av:  pointer to a new string
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
int i, n, j = 0, l = 0;

char *str;
if
	(ac == 0 || av == NULL)
return (NULL);
for
	(i = 0;
	 i < ac;
	 i++);
{
for
	(n = 0;
av[i][n];
n++);
l++;
}
l += ac;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
str[j] = av[i][n];
j++;
}
if (str[j] == '\0')
{
str[j++] = '\n';
}
}
return (str);
}
