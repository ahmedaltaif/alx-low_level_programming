#include "main.h"
/**
 * read_textfile - reads the a file and print the letters
 * @letters: number of letters
 * @filename: filename
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *point;
	ssize_t a;
	ssize_t b;
	int rint;

	if (!filename)
	{
		return (0);
	}

	rint = open(filename, O_RDONLY);
	if (rint == -1)
	{
		return (0);
	}
	point = malloc(sizeof(char) * (letters));
	if (!point)
	{
		return (0);
	}

	a = read(rint, point, letters);

	b = write(STDOUT_FILENO, point, a);

	close(rint);
	free(point);
	return (b);
}