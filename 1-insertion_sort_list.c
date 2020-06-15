#include "sort.h"
void swappy(listint_t *L1, listint_t *L2);

/**
 * insertion_sort_list - Insertion sorting algorithm for doubly linked lists
 * @list: Unsorted doubly linked list
 * Return: Nothing, function is void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *at;

	if (!list || !(*list) || !(*list)->next)
		return;

	at = (*list)->next;
	while (at)
	{
		while (at->prev && at->n < at->prev->n)
		{
			swappy(at->prev, at);
			while (at->prev) /* Return to head */
				at = at->prev;
			*list = at;
			print_list(*list);
		}
		at = at->next;
	}
}

/**
 * swappy - Swap around a doubly linked list
 * @L1: List 1
 * @L2: List 2
 * Return: Nothing, function is void
 */
void swappy(listint_t *L1, listint_t *L2)
{
	listint_t *temp;

	if (L1->next == L2) /* special case if L2 is next */
	{
		L1->next = L2->next;
		L2->next = L1;
		L2->prev = L1->prev;
		L1->prev = L2;
	}
	else /* if not, use temp to swap values */
	{
		temp = L1->next;
		L1->next = L2->next;
		L2->next = temp;
		temp = L1->prev;
		L1->prev = L2->prev;
		L2->prev = temp;
	}


	/**
	* temp = L1->next;
	* L1->next = L2->next;
	* L2->next = temp;
	* temp = L1->prev;
	* L1->prev = L2->prev;
	* L2->prev = temp;
	**/

	/* Lists are doubly linked, clean up ends of neighbors */
	if (L1->next)
		L1->next->prev = L1;
	if (L1->prev)
		L1->prev->next = L1;

	if (L2->next)
		L2->next->prev = L2;
	if (L2->prev)
		L2->prev->next = L2;
}
