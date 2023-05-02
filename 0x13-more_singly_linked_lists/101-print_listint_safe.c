#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer to the head node
 *
 * Return: if success - number of nodes in the list
 *         if fail - 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count += 1;
		i++;

		if (i >= 9)
		{
			break;
			return (count);
			exit(98);
		}
	}
	return (count);
}

