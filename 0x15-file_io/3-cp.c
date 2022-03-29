#include "main.h"

/**
 * main - copies text from one file to another
 * @argc: arguments from command line
 * @argv: command line string
 * Return: 0 if succesful
 */

int main(int argc, char **argv)
{
	int fo_from, fo_to, fr = 1, fw, fc_from, fc_to;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fo_from = open(argv[1], O_RDONLY);
	fo_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	while (fr > 0)
	{
		fr = read(fo_from, buffer, 1024);
		if (fo_from == -1 || fr == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		fw = write(fo_to, buffer, fr);
		if (fo_to == -1 || fw == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	fc_from = close(fo_from);
	fc_to = close(fo_to);
	if (fc_from == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fo_from);
		exit(100);
	}
	if (fc_to == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fo_to);
		exit(100);
	}

	return (0);
}
