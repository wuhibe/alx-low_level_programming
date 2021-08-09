#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - function to read a text and write to POSIX stdout
 * @filename: name of file
 * @letters: count of characters to read/write
 * Return: count of written characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readText, writeText;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	readText = read(fd, buffer, letters);
	if (readText == -1)
	{
		free(buffer);
		return (0);
	}

	writeText = write(STDOUT_FILENO, buffer, readText);
	if (writeText == -1 || readText != writeText)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (writeText);
}
