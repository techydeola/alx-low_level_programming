#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in
 *                a linked list.
 * @h: pointer to the head of the list
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
