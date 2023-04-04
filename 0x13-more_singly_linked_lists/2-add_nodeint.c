#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to pointer to the head
 * @n: name of the list
 *
 * Return: new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->len = n;
	add->next = *head;
	*head = add;

	return (add);
}
