#include "lists.h"

/**
 * free_listint - a function that frees listint_t list
 * @head: pointer to the head address of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head->next != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
