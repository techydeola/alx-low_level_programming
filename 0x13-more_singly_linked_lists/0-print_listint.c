#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
