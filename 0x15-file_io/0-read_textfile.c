#include "main.h"
/**
 * read_textfile - reads the a file and print the letters
 * @letters: number of letters
 * @filename: filename
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t red, wrt;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(str);
		return (0);
	}
	red = read(file, str, letters);
	if (red < 0)
	{
		free(str);
		return (0);
	}
	if (red > 0)
		wrt = write(STDOUT_FILENO, str, red);
	if (wrt < red)
	{
		free(str);
		return (0);
	}
	wrt = close(file);
	if (wrt < 0)
	{
		free(str);
		return (0);
	}
	free(str);

	return (red);
}
