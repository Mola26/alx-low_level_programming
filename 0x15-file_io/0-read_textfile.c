#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to POSIX standard output
 * @letters: the number of letters
 * @filename: the name of the file
 *
 * Return - 0 if NULL or 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t w;
	ssize_t t;
	char *buf;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buf = malloc((sizeof(char) * letters);
	t = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (w);
}
