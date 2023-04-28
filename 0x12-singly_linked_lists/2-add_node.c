#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer
 * @str: pointer
 * Return: new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	unsigned int i = 0;

	while (str[i])
		i++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->next = add;

	return (*head);
}
