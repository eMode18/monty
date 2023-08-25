#include "monty.h"
/**
 * fnc_pall - function prints the stack
 * @head: head
 * @t_tally: nun
 * Return: nothing
*/
void fnc_pall(stack_t **head, unsigned int t_tally)
{
	stack_t *_head;
	(void)t_tally;

	_head = *head;
	if (_head == NULL)
		return;
	while (_head)
	{
		printf("%d\n", _head->n);
		_head = _head->next;
	}
}

