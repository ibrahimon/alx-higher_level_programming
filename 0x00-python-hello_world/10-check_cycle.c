#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *temp, *nw;

	if (list == NULL || list->next == NULL)

		return (0);

	temp = list->next;
	nw = list->next->next;

	while (temp && nw && nw->next)
	{
		if (temp == nw)
			return (1);

		temp = temp->next;
		nw = nw->next->next;
	}
	return (0);
}
