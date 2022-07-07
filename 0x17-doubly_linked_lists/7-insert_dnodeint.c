#include "lists.h"

/**
 * insert_dnodeint_at_index - the function
 *
 * @h: the pointer
 * @idx: the node wanted
 * @n: data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* allow memory*/
	dlistint_t *prev, *new_node = new_node;
	unsigned int i = 1;

	new_node = malloc(sizeof(dlistint_t));

	/* set prev head*/
	prev = (*h);
	/* in case of fail*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	if ((*h) == NULL)
	{
		return (NULL);
	}
	/* set next of newNode*/
	while (i <= idx)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = prev->next;
			prev->next = new_node;
			new_node->prev = prev;
			new_node->next->prev = new_node;
			return (new_node);
		}
		prev = prev->next;
		i++;
	}
	return (NULL);
}
