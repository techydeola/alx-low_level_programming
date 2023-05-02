#include "lists.h"

/**
 * free_listint - a function that frees listint_t list
 * @head: pointer to the head address of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
