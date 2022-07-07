#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: pointer
 * @index: wanted node
 * Return: node found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* allow memory and variable*/
	unsigned int i = 0;
	/* in case node doesn't exist */
	if (head == NULL)
	{
		return (NULL);
	}
	/* traversal and conditional*/
	while (i != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
