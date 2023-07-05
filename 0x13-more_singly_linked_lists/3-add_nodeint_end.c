#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @n: value to be stored in the new node
 *
 * Return: address of the new alement
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
