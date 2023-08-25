#include "monty.h"
/**
 * fnc_pint - function to print
 * @head: head
 * @t_tally: line_number
 * Return: nothing
*/
void fnc_pint(stack_t **head, unsigned int t_tally)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", t_tally);
		fclose(sub.file);
		free(sub.f_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

