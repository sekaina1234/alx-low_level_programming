#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
int f, l, bytes;
if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);
if (text_content == NULL)
{
close(f);
return (1);
}
for (l = 0; text_content[l]; l++)
;
bytes = write(f, text_content, l);
close(f);
return (bytes == l ? 1 : -1);
}
