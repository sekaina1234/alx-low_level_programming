#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
int file_f, file_t, r, w;
char b[BUFFER_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_t\n");
exit(97);
}
file_f = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
if (file_t == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((r = read(file_f, b, BUFFER_SIZE)) > 0)
{
w = write(file_t, b, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (r == -1)
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
