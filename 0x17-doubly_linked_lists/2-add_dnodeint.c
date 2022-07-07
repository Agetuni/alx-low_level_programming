#include "lists.h"

/**
 * add_dnodeint - function
 *
 * @head: double pinter
 * @n: data
 * Return: address new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* allocate the memory and struct*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	/* in case of fail*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* allocat the data*/
	new_node->n = n;
	/* set the head */
	new_node->next = (*head);
	new_node->prev = NULL;
    /* Change the prev of head to new node*/
	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

return (new_node);
}
