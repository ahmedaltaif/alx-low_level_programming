#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @text_content: added content
 * Return: 1 on success and -1 on failure
 * @filename: filename.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int tall = 0;
	int fil = 0;
	int reed = 0;

		if (!filename)
		{
			return (-1);
		} else if (!text_content || !text_content[0])
		{
			return (1);
		}
		fil = open(filename, O_WRONLY | O_APPEND);
		if (fil < 0)
		{
			return (-1);
		}
		while (text_content[tall] != '\0')
		{
			tall++
		}
		reed = write(fil, text_content, tall);
		if (reed < 0)
			return (-1);
	close(fil);
	return (1);

}
