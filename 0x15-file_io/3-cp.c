#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void close_file(int fd);
/**
 * close_file - ...
 * @fd: ...
 */
void close_file(int fd)
{
int d;
d = close(fd);
if (d == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 *
 * Description: If the argument count is incorrect - ....
 * If file_from does not exist or cannot be read - ...
 * If file_to cannot be created or written to - ...
 * If file_to or file_from cannot be closed - ...
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((r = read(from, buffer, 1024)) > 0)
{
w = write(to, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
close_file(from);
close_file(to);
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
close_file(from);
close_file(to);
exit(98);
}
close_file(from);
close_file(to);
return (0);
}
