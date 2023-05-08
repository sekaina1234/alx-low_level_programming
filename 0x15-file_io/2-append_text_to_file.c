#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, l, bytes;
if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content != NULL)
{
l = 0;
while (text_content[l])
l++;
bytes = write(f, text_content, l);
if (bytes != l)
return (-1);
}
close(f);
return (1);
}
