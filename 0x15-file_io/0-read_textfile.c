#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters
 * Return: the actual number of letters
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int archivo, leer, escrib;
char *fub = malloc(sizeof(char) * letters);

if (filename == NULL)
{
return (0);
}

archivo = open(filename, O_RDONLY);
if (archivo == -1)
{
return (0);
}

leer = read(archivo, fub, letters);
if (leer == -1)
{
return (0);
}

escrib = write(STDOUT_FILENO, fub, leer);
if (escrib == -1)
{
return (0);
}
close(archivo);

return (escrib);
}
