#include "lists.h"

/**
 * free_dlistint - function
 *
 * @head: pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
