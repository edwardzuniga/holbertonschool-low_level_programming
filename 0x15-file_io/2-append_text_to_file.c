#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int archivo, i, escrib;

if (filename == NULL)
{
return (-1);
}
archivo = open(filename, O_APPEND | O_WRONLY);
if (archivo == -1)
{
return (-1);
}

if (text_content == NULL)
{
text_content = "";
}
i = 0;
while (text_content[i] != '\0')
i++;

escrib = write(archivo, text_content, i);
if (escrib == -1)
{
return (-1);
}
close(archivo);

return (1);
}

