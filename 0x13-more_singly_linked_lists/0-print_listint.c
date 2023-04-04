#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint- print all functions
 * @h: name of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
