#include "main.h"
/**
 * read_textfile - reads the a file and print the letters
 * @letters: number of letters
 * @filename: filename
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fid, rad, wrte;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(letters * sizeof(char) + 1);
	if (!str)
		return (0);
	fid = open(filename, O_RDONLY);
	if (rad == -1)
	{
		free(str);
		return (0);
	}
	wrte = write(STDOUT_FILENO, str, rad);
	if (fid == -1)
	{
		free(str);
		return (0);
	}
	rad = read(fid, str, letters);

	close(fid);
	free(str);
	if (rad == wrte)
		return (wrte);
	return (0);
}