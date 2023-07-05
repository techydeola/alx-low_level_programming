#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the head node
 * @n: data to be added
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	temp = new_node;
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
