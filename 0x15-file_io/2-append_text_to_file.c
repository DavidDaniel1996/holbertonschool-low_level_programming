#include "main.h"

/**
 * append_text_to_file - appends text to the end of an existing file
 * @filename: name of file
 * @text_content: text to be appended in file
 *
 * Return: -1 if failure, 1 if success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}

	fo = open(filename, O_RDWR | O_APPEND, 0600);
	if (fo == -1)
	{
		return (-1);
	}

	fw = write(fo, text_content, len);
	if (fw == -1)
	{
		return (-1);
	}

	close(fo);
	return (1);
}
