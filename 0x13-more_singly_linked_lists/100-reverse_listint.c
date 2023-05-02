#include "lists.h"

/**
 * *reverse_listint - a function that reverses a linked list
 * @head: a pointer to the list
 *
 * Return: a pointer to the first node of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;

	while (current != NULL)
	{
		(*head) = current;
		current = current->next;
		(*head)->next = previous;
		previous = (*head);
	}

	return (*head);
}
