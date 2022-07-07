#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: double pointer
 * @n: data node
 * Return: 0 in case of finis or nothing otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    /* allocate the memory and struct*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
    /* temporary node*/
	dlistint_t *temp = (*head);
	/* in case of fail*/
	if (new_node == NULL)
		return (NULL);
	/* allocat the data*/
	new_node->n = n;
    /* set the head */
	new_node->next = NULL;

	/* if linkes list is null*/
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	/* Traversal*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* point the nexxt of the last node*/
	temp->next = new_node;
	/* assign prev of newNode to temp*/
	 new_node->prev = temp;

return (new_node);
}
