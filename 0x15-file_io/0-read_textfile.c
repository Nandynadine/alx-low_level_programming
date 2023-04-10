
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, read_f, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	read_f = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, read_f);

	if (file == -1 || read_f == -1 || w == -1 || w != read_f)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (w);
}
