#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f, n_r, n_w;
char *b;
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
b = malloc(letters);
if (b == NULL)
{
close(f);
return (0);
}
n_r = read(f, b, letters);
if (n_r == -1)
{
close(f);
free(b);
return (0);
}
n_w = write(STDOUT_FILENO, b, n_r);
if (n_w == -1 || (size_t)n_w != (size_t)n_r)
{
close(f);
free(b);
return (0);
}
close(f);
free(b);
return (n_w);
}
