#include "main.h"

/**
 * create_file - creates a file with read/write permissions
 * @filename: name of file
 * @text_content: text written inside file
 *
 * Return: -1 if failure, 1 if success
 */

int create_file(const char *filename, char *text_content)
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

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
