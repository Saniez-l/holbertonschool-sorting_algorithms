#include "sort.h"

/**
 * insertion_sort_list - sorts a list
 * using insertion sort algorithm
 * @list: list to sort and print
 * Return: none (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (*list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;

			print_list(*list);
		}
		current = current->next;
	}
}
