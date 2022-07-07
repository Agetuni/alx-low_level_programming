#include "lists.h"

/**
 * sum_dlistint - the function
 *
 * @head: pointer
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	/* allow memory and init variable*/
	int sum = 0;
	dlistint_t *temp;
	/* in case of list empty*/
	if (head == NULL)
	{
		return (0);
	}
	/* pointer in head*/
	temp = head;
	/* traversal and sum*/
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
