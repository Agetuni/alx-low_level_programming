#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 *
 * @head: double pointer
 * @index: data
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* allow memory*/
	dlistint_t *prim = *head, *list;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			prim->next->prev = NULL;
			*head = prim->next;
		}
		else
			*head = NULL;
		free(prim);
		return (1);
	}
	else
	{
		while (i < index - 1 && prim != NULL)
		{
			prim = prim->next;
			i++;
		}
		if (prim == NULL || prim->next == NULL)
			return (-1);
		if (prim->next->next != NULL)
			prim->next->next->prev = prim;
		list = prim->next->next;
		free(prim->next);
		prim->next = list;
	}
	return (1);
}
