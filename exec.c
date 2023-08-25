#include "monty.h"
/**
* exec - handle opcode
* @stack: linked list
* @t_tally: line tracker
* @file: file pointer
* @f_content: items in line
* Return: no return
*/
int exec(char *f_content, stack_t **stack, unsigned int t_tally, FILE *file)
{
	instruction_t opst[] = {
				{"push", fnc_push}, {"pall", fnc_pall}, {"pint", fnc_pint},
				{"pop", fnc_pop},
				{"swap", fnc_swap},
				{"add", fnc_add},
				{"nop", fnc_nop},
				{"queue", fnc_queue},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(f_content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	sub.arg_v = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, t_tally);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", t_tally, op);
		fclose(file);
		free(f_content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
