#include "main.h"

/**
 * read_textfile - reads file and print to stdo
 * @filename: name of read file
 * @leteers: number of letters to print
 * Return: 0 if fails or number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int x, y;
	char *par;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	par = malloc(sizeof(char) * letters);
	if (!par)
		return (0);
	x = read(f, par, letters);
	if (x < 0)
	{
		free (par);
		return (0);
	}
		par[x] = '\0';
	close(f);
	y = write(STDOUT_FILENO, par, x);
	if (y < 0)
	{
		free(par);
		return (0);
	}
	free(par);
	return (y);
}
