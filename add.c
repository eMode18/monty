#include "monty.h"
/**
 * fnc_add - sum two stack elements.
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_add(stack_t **head, unsigned int t_tally)
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
		fprintf(stderr, "L%d: denied, stack length error\n", t_tally);
		fclose(sub.file);
		free(sub.f_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	curr = _head->n + _head->next->n;
	_head->next->n = curr;
	*head = _head->next;
	free(_head);
}

