#include "main.h"
/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to be created
 * @text_content: A pointer to a string to write to the file
 *
 * Return: If function not possible - -1 incase - 2
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}
