#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char buffer[1024];
ssize_t total_read = 0;
ssize_t bytes_read;
ssize_t bytes_to_print;
ssize_t bytes_written;

if (filename == NULL)
{
return (0);
}

file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}

while (letters > 0)
{
bytes_read = fread(buffer, 1, sizeof(buffer), file);
if (bytes_read == 0)
{
break;
}
bytes_to_print = (bytes_read > (ssize_t) letters) ? (ssize_t)
letters : bytes_read;

bytes_written = write(STDOUT_FILENO, buffer, bytes_to_print);

if (bytes_written != bytes_to_print)
{
fclose(file);
return (0);
}
total_read += bytes_to_print;
letters -= (size_t) bytes_to_print;
}
fclose(file);
return (total_read);
}
