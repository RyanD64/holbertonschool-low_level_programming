#include"main.h"

/**
  *read_textfile - read a text file and print it
  *@filename: - random string
  *@letters: - random value
  *Return: fd otherwise 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t nombresbyte;

fd = open(filename, O_RDONLY);
buffer = malloc(sizeof(char) * letters);

if (filename == NULL)
{
	return(0);
}

if (fd == -1)
	{
	return (0);
	}

else
{
	nombresbyte = read(fd, buffer, letters);

	if (nombresbyte == 0)
	{
		return (0);
	}

	else
	{
		write(STDOUT_FILENO, buffer, letters);
	}
return (fd);
}
}
