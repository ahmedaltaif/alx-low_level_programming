#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file
 * Return: 1 on success, -1 on failure
 * @text_content: content
 */
int create_file(const char *filename, char *text_content)
{
	int writ = 0;
	int leng = 0;
	int x = 0;

	if (!filename)
		return (-1);
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[leng])
	{
		leng++;
	}
	writ = write(x, text_content, leng);

	if (writ == -1)
		return (-1);
	close(x);
	return (1);
}
