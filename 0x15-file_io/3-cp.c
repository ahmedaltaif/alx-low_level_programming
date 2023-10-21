#include "main.h"
/**
 * main - check the code
 * @argc: arguments.
 * @argv: arguments.
 * Return:0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t numch, dwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	numch = 1024;
	while (numch == 1024)
	{
		numch = read(file_from, buf, 1024);
		if (numch == -1)
		{
			error_file(-1, 0, argv);
		}
		dwr = write(file_to, buf, numch);
		if (dwr == -1)
		{
			error_file(0, -1, argv);
		}
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

/**
 * error_file - copies the content of a file to another file..
 * @argv: arguments .
 * @file_from: file_from.
 * @file_to: file_to.
 * Return: 0.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	} else if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
