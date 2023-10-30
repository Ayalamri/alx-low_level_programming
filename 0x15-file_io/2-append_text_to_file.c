#include"main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to add at the end of the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, x, y;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		x = write(fl, text_content, strlen(text_content));

		if (x == -1)
		{
			close(fl);
			return (-1);
		}
	}

	y = close(fl);

	if (y == -1)
		return (-1);

	return (1);
}
