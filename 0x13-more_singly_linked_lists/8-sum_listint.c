#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 *               of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: if list is empty - 0
 *         if success - 1
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
