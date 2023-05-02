#include "lists.h"

/**
 * listint_len - a function that returns the
 *               number of elements in a linked list.
 * @h: pointer to the head address
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
