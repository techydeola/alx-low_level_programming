#include "lists.h"
#include "string.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head address
 * @str: pointer to the element to be added to the list
 *
 * Return: the address of the new element, or (NULL) if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *n = (struct list_s*)malloc(sizeof(struct list_s));

	if (n == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup;
	n->len = len;
	n->next = *head;

	*head = n;

	return (n);
}
