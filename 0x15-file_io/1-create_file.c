#include"main.h"

/**
 * create_file - Creates a file with the
 * specified permissions and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fl, x, y;
	mode_t ps = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, ps);

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
