#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - efzdadcc
 *@filename: sdccz
 *@letters: sdvcdzvcsc
 *Return: sdcdzcxc
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, reread, rewrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	reread = read(file, buffer, letters);
	if (reread == -1)
		return (0);
	rewrite = write(STDOUT_FILENO, buffer, reread);
	if (rewrite == -1)
		return (0);
	free(buffer);
	close(file);
	return (rewrite);
}
