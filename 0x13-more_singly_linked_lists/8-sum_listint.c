#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum pf all the data (n)
 * @head: a pointer to a pointer
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
