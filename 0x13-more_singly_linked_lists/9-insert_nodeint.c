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
	listint_t *new_node, *prev_node = NULL, *last_mode = *head;
	unsigned int j = 0;

	if (*head == NULL && idx == 0)
	{
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	*head = new_node;
	return (new_node);
	}

	while (last_node == NULL && j < idx)
	{
		prev_node = last_node;
		last_node = last_node->next;
		j++;
	}

	if (last_node == NULL && j < idx)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (prev_node != NULL)
		prev_mode->next = new_mode;
	else
		+head = new_node;

	new_node->next = last_node;

	return (new_node);
}
