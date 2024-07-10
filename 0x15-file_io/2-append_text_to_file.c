#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: null terminated string added to the end of the file
 *
 * Return: 1 on success and -1 on failure. -1 if filename is NULL or if
 *	file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, file_descriptor, len;

	if (!filename)
		return (-1);
	if (text_content)
		return (1);

	i = 0;
	while (text_content[i] != '\0')
		i++;
	len = i;

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	write(file_descriptor, text_content, len);
	return (1);
}
