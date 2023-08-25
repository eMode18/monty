#include "monty.h"
/**
 * fnc_push - grow stack
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_push(stack_t **head, unsigned int t_tally)
{
	int a, b = 0, ind = 0;

	if (sub.arg_v)
	{
		if (sub.arg_v[0] == '-')
			b++;
		for (; sub.arg_v[b] != '\0'; b++)
		{
			if (sub.arg_v[b] > 57 || sub.arg_v[b] < 48)
				ind = 1; }
		if (ind == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", t_tally);
			fclose(sub.file);
			free(sub.f_content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", t_tally);
		fclose(sub.file);
		free(sub.f_content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	a = atoi(sub.arg_v);
	if (sub.fili == 0)
		p_node(head, a);
	else
		p_queue(head, a);
}

