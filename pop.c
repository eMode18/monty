#include "monty.h"
/**
 * fnc_pop - prints the top
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_pop(stack_t **head, unsigned int t_tally)
{
	stack_t *_head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: denied, stack empty - pop err\n", t_tally);
		fclose(sub.file);
		free(sub.f_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	*head = _head->next;
	free(_head);
}

