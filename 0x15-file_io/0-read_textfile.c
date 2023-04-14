#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @letters: the number of letters
 * @filename: the name of the file
 *
 * Return: 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t wr;
	ssize_t rd;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buf = malloc((sizeof(char) * letters);
	td = read(f, buf, letters);
	wr = write(STDOUT_FILENO, buf, td);

	free(buf);
	close(f);
	return (wr);
}
