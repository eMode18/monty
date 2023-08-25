#include "monty.h"
/**
 * p_node - append node
 * @head: head
 * @a: new input
 * Return: nothing
*/
void p_node(stack_t **head, int a)
{

	stack_t *n_node, *curr;

	curr = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (curr)
		curr->prev = n_node;
	n_node->n = a;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}

