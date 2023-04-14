#include "main.h"

/**
 * _strlen length of a string
 * @str:the pointer
 *
 * Return: lengt
 */
size_t _strlen(char *str)
{
	size_t d;

	for (d = 0; str[d];d++)
		;
	return (d);
}

/**
 * append_text_to_file - appends text
 * @filename: name of the file
 * @text_content: name of the file
 *
 * Return: 1 if successful and -1 is failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fn, text_content, _strlen(text_content));
	close(fn);
	if (len == -1)
		return (-1);
	return (1);
}
