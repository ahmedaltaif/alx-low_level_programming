#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @text_content: added content
 *
 * @filename: filename.
 * Return: 1 if the file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int re = 0;

	int file = 0;

	int tal = 0;

	if (!filename)
	{
		return (-1);
	} else if (!text_content || !text_content[0])
	{
		return (1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}
	for (tal = 0; text_content[tal]; tal++)
		;
	re = write(file, text_content, tal);
	if (re < 0)
	{
		return (-1);
	}
	close(file);
	return (1);

}
