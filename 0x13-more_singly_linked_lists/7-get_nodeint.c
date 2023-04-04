#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: a pointer to a pointer
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d = 0;
	listint_t *new = head;

	while (new != NULL && d < index)
	{
	new = new->next;
	d++;
	}
	return (new);

}
