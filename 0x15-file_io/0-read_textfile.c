#include "main.h"

/**
 * read_textfile - reads file and print the letters
 * @filename: filename
 * Return: num of letters
 * @letters: num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	ssize_t rred, wwrt;
	char *sttr;

		if (filename == NULL)
			return (0);

		sttr = malloc(sizeof(char) * letters);
		if (sttr == NULL)
			return (0);

		fil = open(filename, O_RDONLY);
		if (file < 0)
		{
			free(sttr);
			return (0);
		}

		rred = read(file, sttr, letters);
		if (rred < 0)
		{
			free(sttr);
			return (0);
		}

		if (rred > 0)
			wwrt = write(STDOUT_FILENO, sttr, rred);
		if (wwrt < rred)
		{
			free(sttr);
			return (0);
		}
		wwrt = close(fil);
		if (wwrt < 0)
		{
			free(sttr);
			return (0);
		}
		free(sttr);
	return (rred);
}
