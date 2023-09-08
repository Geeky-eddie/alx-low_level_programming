#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *boo;
	ssize_t fop;
	ssize_t wr;
	ssize_t tr;

	fop = open(filename, O_RDONLY);
	if (fop == -1)
		return (0);
	boo = malloc(sizeof(char) * letters);
	tr = read(fop, boo, letters);
	wr = write(STDOUT_FILENO, boo, tr);

	free(boo);
	close(fop);
	return (wr);
}
