#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 *                   of a listint_t list
 * @head: a pointer holding the first node address
 * @n: element to be stored
 *
 * Return: if success - address of new element
 *         if failed - NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	return (new_node);
}
