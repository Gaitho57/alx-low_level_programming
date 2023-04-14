#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: text file beig read
 * @letters: number of letters read
 * Return: W- actual number of bytes read and printed 0
 * when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_read;
ssize_t bytes_written;

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
bytes_read =  read(file_descriptor, buffer, letters);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(file_descriptor);
return (bytes_written);
}
