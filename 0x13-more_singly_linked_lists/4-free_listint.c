#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: name of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *last = head;
	listint_t *next;

	while (last != NULL)
	{
		next = last->next;
		free(last);
		last = next;
	}
}
