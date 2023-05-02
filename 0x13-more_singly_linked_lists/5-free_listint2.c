#include "lists.h"

/**
 * free_listint2: a function that frees a listint_t list
 * @head: a pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t * temp;

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	free(temp);
	*head = NULL;
}
