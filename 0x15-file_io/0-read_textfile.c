#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: name of file containing text
 * @letters: amount of characters to be printed
 *
 * Return: numbers printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (-1);
	}

	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		return (0);
	}

	fr = read(fo, buffer, letters);
	fw = write(STDOUT_FILENO, buffer, fr);
	if (fw == -1)
	{
		return (0);
	}

	close(fo);

	return (fw);
}
