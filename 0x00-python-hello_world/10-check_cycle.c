#include "lists.h"
/**
 * check_cycle - checks if a singly linked
 * list has a cycle in it
 * @list: linked list
 * Return: 0 if there is no cycle otherwise 1
 */
int check_cycle(listint_t *list)
{
	listint_t *f, *s;

	if (!list)
	{
		return (0);
	}
	s = list;
	f = list->next;
	while (f && s && f->next)
	{
		if (s == f)
		{
			return (1);
		}
		s = s->next;
		f = f->next->next;
	}

	return (0);
}
