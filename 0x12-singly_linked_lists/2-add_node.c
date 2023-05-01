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
	list_t *new;

	unsigned int i = 0;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
