#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
 * error - ...
 * @exit_code: ...
 * @format: ...
 * @...: ...
 *
 * Return: ...
 */
void error(int exit_code, char *format, ...)
{
va_list args;
va_start(args, format);
dprintf(STDERR_FILENO, "Error: ");
vdprintf(STDERR_FILENO, format, args);
dprintf(STDERR_FILENO, "\n");
va_end(args);
exit(exit_code);
}
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
int fd_f, fd_t, r, w;
char buf[1024];
if (argc != 3)
error(97, "Usage: cp file_from file_to");
fd_f = open(argv[1], O_RDONLY);
if (fd_f == -1)
error(98, "Can't read from file %s", argv[1]);
fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_t == -1)
error(99, "Can't write to %s", argv[2]);
do {
r = read(fd_f, buf, 1024);
if (r == -1)
error(98, "Can't read from file %s", argv[1]);
w = write(fd_t, buf, r);
if (w == -1)
error(99, "Can't write to %s", argv[2]);
}
while (r > 0);
if (close(fd_f) == -1)
error(100, "Can't close fd %d", fd_f);
if (close(fd_t) == -1)
error(100, "Can't close fd %d", fd_t);
return (0);
}
}
