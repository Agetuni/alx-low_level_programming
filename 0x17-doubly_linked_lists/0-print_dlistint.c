#include "lists.h"

/**
 * print_dlistint - function
 *
 * @h: the structure
 * Return: size_t
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("NULL\n");
		}

		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
}
return (count);
}
