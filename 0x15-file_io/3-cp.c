#include "main.h"
/**
 * main - copies the contents of a file to another file
 * @argc: number of command line arguments
 * @argv: argument vector containing an array of strings
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(src_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);
	if (close(dest_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);
	return (0);
}
