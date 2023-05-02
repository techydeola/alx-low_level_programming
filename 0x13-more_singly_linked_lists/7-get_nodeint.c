#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: a pointer to the address of first node
 * @index: index
 *
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
	}

	return (temp);
}

