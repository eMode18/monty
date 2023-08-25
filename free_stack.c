#include "monty.h"
/**
* free_stack - free list
* @head: stack head
*/
void free_stack(stack_t *head)
{
	stack_t *curr;

	curr = head;
	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
