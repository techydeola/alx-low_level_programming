#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: a pointer to the elements
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return (count);
}
