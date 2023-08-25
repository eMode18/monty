#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct sub_s - contains args/line content
 * @arg_v: value
 * @file: pointer to monty file
 * @f_content: content
 * @fili: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct sub_s
{
	char *arg_v;
	FILE *file;
	char *f_content;
	int fili;
}  sub_t;
extern sub_t sub;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void execute(char *line, stack_t **stack, unsigned int line_number, FILE *file);

void fnc_push(stack_t **head, unsigned int numeral);
void fnc_pall(stack_t **head, unsigned int numeral);
void fnc_pint(stack_t **head, unsigned int numeral);
void free_stack(stack_t *head);
int exec(char *content, stack_t **stack, unsigned int counter, FILE *file);
void fnc_queue(stack_t **head, unsigned int t_tally);
void fnc_pop(stack_t **head, unsigned int t_tally);
void fnc_swap(stack_t **head, unsigned int t_tally);
void p_node(stack_t **head, int a);
void p_queue(stack_t **head, int a);
void fnc_add(stack_t **head, unsigned int t_tally);
void fnc_nop(stack_t **head, unsigned int t_tally);
#endif

