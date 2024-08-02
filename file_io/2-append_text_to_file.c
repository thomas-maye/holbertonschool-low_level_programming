#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_id;
	ssize_t text_length = 0, written_count;

	if (filename == NULL)
		return (-1);

	file_id = open(filename, O_WRONLY | O_APPEND);

	if (file_id == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
		{
			text_length++;
		}
	}

	written_count = write(file_id, text_content, text_length);

	if (written_count == -1)
	{
		close(file_id);
		return (-1);
	}
	close(file_id);
	return (1);
}
