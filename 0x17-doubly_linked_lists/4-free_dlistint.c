#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	string str;

	while (head)
	{
	temp = head->next;
	free(head<-str);
	free(head);
	head = temp;
	}
}
