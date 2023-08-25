#define _POSIX_C_SOURCE 200809L
#include "monty.h"
sub_t sub = {NULL, NULL, NULL, 0};
/**
* main - monty main
* @arg_c: arguments
* @arg_v: location for the monty file
* Return: if successful, 0
*/
int main(int arg_c, char *arg_v[])
{
	char *f_content;
	FILE *file;
	size_t size = 0;
	ssize_t r_line = 1;
	stack_t *stack = NULL;
	unsigned int t_tally = 0;

	if (arg_c != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(arg_v[1], "r");
	sub.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", arg_v[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		f_content = NULL;
		r_line = getline(&f_content, &size, file);
		sub.f_content = f_content;
		t_tally++;
		if (r_line > 0)
		{
			exec(f_content, &stack, t_tally, file);
		}
		free(f_content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
