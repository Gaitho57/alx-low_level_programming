#include "main.h"

/**
 * append_text_to_file - Adds text to the file terminal
 * @filename: A pointer to the id  of the file
 * @text_content: The string to place at the end of the file
 *
 * Return: if function is not possible or fails filename is NULL - -1
 * if the file is non existant the user lacks write permissions - -1
 * incase - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, text_length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (text_length = 0; text_content[text_length];)
text_length++;
}

file_descriptor = open(filename, O_WRONLY | O_APPEND);
bytes_written = write(file_descriptor, text_content, text_length);

if (file_descriptor == -1 || bytes_written == -1)
return (-1);

close(file_descriptor);

return (1);
}
