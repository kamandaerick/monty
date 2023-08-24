#include "monty.h"
/**
 * get_file_stream_error - prints message when getting filestream fails
 * @f_name: the name of the file that fails to open
 */

void get_file_stream_error(char *f_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", f_name);
	free_args();
	exit(EXIT_FAILURE);
}

/**
 * get_file_stream - reads from a given filename
 * @f_name: the name of the file to be read
 */

void get_file_stream(char *f_name)
{
	int fd;

	fd = open(f_name, O_RDONLY);
	if (fd == -1)
		get_file_stream_error(f_name);

	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		get_file_stream_error(f_name);
	}
}
