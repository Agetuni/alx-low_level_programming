#include "lists.h"

/**
 * dlistint_len - the function
 *
 * @h: structure
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("any lenght");
		}

		else
		{
			lenght++;
		}
		h = h->next;
}
return (lenght);
}
