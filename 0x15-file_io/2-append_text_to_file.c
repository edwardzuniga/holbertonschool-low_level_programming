#include "main.h"

/**
 * append_text_to_file - function that creates a file.
 * @filename: name of file
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
int archivo, i;

if (filename == NULL)
{
return (-1);
}
archivo = open(filename, O_WRONLY | O_TRUNC, 0600);
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

write(archivo, text_content, i);

close(archivo);

return (1);

if (text_content == NULL)
{
if (filename != NULL)
{
return (1);
}
else
{
return (-1);
}
}
}
