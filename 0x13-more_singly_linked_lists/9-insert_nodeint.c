#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 *                           at a given position
 * @head: pointer to the first node
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: if failed - NULL
 *         if can't add new node - NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	tmp = *head;

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
