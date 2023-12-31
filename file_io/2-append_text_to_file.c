#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name for the file
 * @text_content: The content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_APPEND);

	else
		fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (!text_content)
		return (1);
	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);
	close(fd);

	return (1);
}
