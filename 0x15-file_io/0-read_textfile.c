#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *		standard output
 *@filename: name of the file to be read
 *@letters: number of letters to be read and printed
 *
 * Return: 0 if error in opening, reading, writing, or  if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	return (bytes_written);
}
