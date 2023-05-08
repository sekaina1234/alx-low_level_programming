#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define BUFSIZE 1024
/**
 * main - ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
int file_f, file_t, read_r, write_r;
char b[BUFSIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_f = open(argv[1], O_RDONLY);
if (file_f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_t == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((read_r = read(file_f, b, BUFSIZE)) > 0)
{
write_r = write(file_t, b, read_r);
if (write_r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (read_r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(file_f) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
exit(100);
}
if (close(file_t) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_t);
exit(100);
}
return (0);
}
