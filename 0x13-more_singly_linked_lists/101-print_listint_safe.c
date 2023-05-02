#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes
 * @head: pointer to the head of the listint_t
 * Return: list is not looped - 0, otherwise special nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *big, *small;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	big = head->next;
	small = (head->next)->next;

	while (small)
	{
		if (big == small)
		{
			big = head;
			while (big != small)
			{
				nodes++;
				big = big->next;
				small = small->next;
			}

			big = big->next;
			while (big != small)
			{
				nodes++;
				big = big->next;
			}

			return (nodes);
		}

		big = big->next;
		small = (small->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints safe lists
 * @head: A pointer to head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
