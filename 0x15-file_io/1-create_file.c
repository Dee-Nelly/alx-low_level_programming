#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: string that is NULL terminated and written into file
 *
 * Return: 1 on success, -1 if error or if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int len, i, file_descriptor;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	i = 0;
	while (text_content[i] != '\0')
		i++;
	len = i;

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);
	write(file_descriptor, text_content, len);

	return (1);
}
