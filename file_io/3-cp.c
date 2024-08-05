#include "main.h"

/**
 * type_exit - function to switch all the error type and exit
 * @num_error: the number of the error exit
 * @file_name: file name associated with the error
 * @file_id: file descriptor
 * Return: 0
 */

int type_exit(int num_error, char *file_name, int file_id)
{
	switch (num_error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_id);
			break;
		default:
			return (0);
	}
	exit(num_error);
}

/**
 * main - function to copy the content of a file to another file
 * @argc: the number of argument
 * @argv: the array of caracter
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to;
	ssize_t read_count, written_count;

	/*nombre d'argument mini au lancement*/
	if (argc != 3)
		type_exit(97, NULL, 0);
	/*on ouvre le fichier de lecture et verif si ouvert*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		type_exit(98, argv[1], 0);
	/*on ouvre le fichier d'ecriture (cree si besoin) et verif ok*/
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		type_exit(99, argv[2], 0);
	/*boucle lit le fichier par bloc de 1024*/
	while ((read_count = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		written_count = write(file_to, buffer, read_count);
		if (written_count == -1 || written_count != read_count)
		{
			close(file_from);
			close(file_to);
			type_exit(99, argv[2], 0);
		}
	}
	if (read_count == -1)
	{
		close(file_from);
		close(file_to);
		type_exit(98, argv[1], 0);
	}
	/*verif si les deux fichiers sont fermés*/
	if (close(file_from) == -1)
		type_exit(100, NULL, file_from);
	if (close(file_to) == -1)
		type_exit(100, NULL, file_to);
	return (0);
}
