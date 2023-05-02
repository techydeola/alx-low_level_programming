#include "lists.h"

/**
 * pop_listint- a function that deletes the head node of a listint_t
 *               linked list, and returns the head node’s data (n).
 * @head: a pointer to the first node
 *
 * Return: if list is empty - 0
 *         else return 1
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	free(*head);

	if (temp != NULL)
		*head = temp;
	else
		*head = NULL;

	return (1);
}
