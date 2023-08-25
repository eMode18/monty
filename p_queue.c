#include "monty.h"
/**
 * fnc_queue - function to print
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_queue(stack_t **head, unsigned int t_tally)
{
	(void)head;
	(void)t_tally;
	sub.fili = 1;
}

/**
 * p_queue - append last
 * @a: new input
 * @head: head
 * Return: nothing
*/
void p_queue(stack_t **head, int a)
{
	stack_t *n_node, *curr;

	curr = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = a;
	n_node->next = NULL;
	if (curr)
	{
		while (curr->next)
			curr = curr->next;
	}
	if (!curr)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		curr->next = n_node;
		n_node->prev = curr;
	}
}

