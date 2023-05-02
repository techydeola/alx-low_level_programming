#include "lists.h"

/**
 * add_nodeint - a function that adds a newnode at the
 *                beginning of a listint_t list
 * @head: a pointer to the head address
 * @n: integer to be added
 *
 * Return: if success - address of new element
 *         if failed - NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	if (head == NULL)
	{
		*head = newnode;
		newnode->n = n;
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
