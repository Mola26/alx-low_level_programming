#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inerst a new node at a given position
 * @head: A pointer to the head
 * @idx: index of the list where new node should be added
 * @n: name of the list/node
 *
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *latest;
	unsigned int j;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	latest = *head;
	for (j = 0; latest != NULL && j < idx - 1; j++)
		latest = latest->next;

	if (j == idx - 1)
	{

		new_node->next = latest->next;
		latest->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
