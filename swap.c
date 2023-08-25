#include "monty.h"
/**
 * fnc_swap - add stack items
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_swap(stack_t **head, unsigned int t_tally)
{
	stack_t *_head;
	int length = 0, curr;

	_head = *head;
	while (_head)
	{
		_head = _head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", t_tally);
		fclose(sub.file);
		free(sub.f_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	curr = _head->n;
	_head->n = _head->next->n;
	_head->next->n = curr;
}

