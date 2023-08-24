#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct cmd_args
{
	int stack;
	stack_t *head;
	int stack_len;
	int no_of_tokens;
	char **tokens;
	unsigned int line_no;
	instruction_t *instruction;
	char *line;
	FILE *stream;
} args_t;
extern args_t *arguments;

void free_args();
void free_head();
void free_stack(stack_t *head);
void initialize_args();
void ma_error();
void get_file_stream(char *f_name);
void get_file_stream_error(char *f_name);
void tokenizer();
void get_opcode();
void invalid_opcode();
void free_all();
void close_file_stream();
void free_tokens();
void execute_opcode();

FILE *fdopen(int fd, const char *mode);

#endif
