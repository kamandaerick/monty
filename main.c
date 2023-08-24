#include "monty.h"
/**
 * main - this is the entry point of the program
 * @ac: the number of commandline arguments
 * @argv: a pointer the commandline arguments
 * Return: returns 0 on success
 */
int main(int ac, char *argv[])
{
	size_t n = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	initialize_args();
	get_file_stream(argv[1]);

	return (0);
}
