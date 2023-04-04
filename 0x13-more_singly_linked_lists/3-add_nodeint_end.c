#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end
 * @head: pointer to pointer at the end
 * @n: name of the list
 *
 * Return: new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *last;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = add;
	}

	return (add);
}
