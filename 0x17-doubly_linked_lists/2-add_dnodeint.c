#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that add a node to the beginning of
 *                    a list
 * @head: pointer to a NULL
 * @n: pointer to an int
 *
 * Return: pointer to the head node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
