#include "main.h"

/**
 * create_file - creates a file
 * @filename: file's name
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_id;
	ssize_t text_length = 0, written_count;

	if (filename == NULL)
		return  (-1);

	file_id = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_id == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[text_length])
		text_length++;

	written_count = write(file_id, text_content, text_length);

	if (written_count == -1)
		return (-1);

	close(file_id);
	return (1);
}
