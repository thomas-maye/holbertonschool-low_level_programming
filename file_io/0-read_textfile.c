#include "main.h"

/**
 * read_textfile - unction that reads a text file and prints
 * it to the POSIX standard output
 * @file_name: name of the file to read
 * @max_letters: maximum number of letters to read and  print
 * Return: number of letters actually printed, 0 if failure
 */

ssize_t read_textfile(const char *file_name, size_t max_letters)
{
	int file_id;
	ssize_t read_count, written_count;
	char *buffer;

	if (file_name == NULL)
		return (0);

	file_id = open(file_name, O_RDONLY);
	if (file_id == -1)
		return (0);

	buffer = malloc(max_letters);
	if (buffer == NULL)
	{
		close(file_id);
		return (0);
	}

	read_count = read(file_id, buffer, max_letters);
	written_count = write(STDOUT_FILENO, buffer, read_count);

	close(file_id);
	free(buffer);
	return (written_count);
}
