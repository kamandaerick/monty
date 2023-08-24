#include "monty.h"
/**
 * close_file_stream - closes the filestream
 */
void close_file_stream()
{
	if (arguments->stream == NULL)
		return;
	fclose(arguments->stream);
	arguments->stream = NULL;
}
