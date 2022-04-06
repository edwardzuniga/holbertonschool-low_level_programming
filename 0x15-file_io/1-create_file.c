#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
int archivo, i, escrib;

if (filename == NULL)
{
return (-1);
}
archivo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
