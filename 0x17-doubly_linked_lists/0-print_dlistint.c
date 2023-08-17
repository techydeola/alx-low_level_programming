#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a linked list
 * @h: pointer to the head node
 *
 * Return: the number of nodes (success)
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
