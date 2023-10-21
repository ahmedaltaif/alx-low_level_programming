#include "main.h"

/**
 * create_file - function that creates a file.
 * @text_content: content
 * @filename: filename
 * Return: 1.
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0;
	int len = 0;
	int writ = 0;

	if (!filename)
		return (-1);
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[len])
	{
		len++;
	}
	writ = write(a, text_content, len);

	if (writ == -1)
	{
		return (-1);
	}
	close(a);
	return (1);
}
