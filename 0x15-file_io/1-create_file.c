#include"main.h"

/**
  * create_file - create a file
  *@filename: random string
  *@text_content: random dtring
  *Return: 1 else -1
  */

int create_file(const char *filename, char *text_content)
{
int fd = 0;
ssize_t buffer;
ssize_t note;

if (filename == NULL)
{
	return (-1);
}

if (text_content != NULL)
{
	while (text_content[fd])
	{
		fd++;
	}
}
else
{
		buffer = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
		note = write(buffer, text_content, fd);
}
if (buffer == -1 || note == -1)
{
	return (-1);
}
close(buffer);
return (1);
}
