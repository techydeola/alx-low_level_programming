#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 *                           at index index of a listint_t linked list
 * @head: pointer to the first node
 * @index: position to be deleted in the list
 *
 * Return: if success - 1
 *         if failed - -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	c = *head;
	while (c != NULL && i < index - 1)
	{
		c = c->next;
		i++;
	}

	if (c == NULL || c->next == NULL)
		return (-1);

	temp = c->next;
	c->next = temp->next;
	free(temp);

	return (1);
}
