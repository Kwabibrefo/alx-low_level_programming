#include "main.h"

/**
 * append_text_to_file - appends text at file end
 * @filename: file
 * @text_content: new append
 * Return: 1 on success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, x, y = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(f, text_content, y);
		if (x != y)
			return (-1);
	}
	close(f);
	return (1);
}
