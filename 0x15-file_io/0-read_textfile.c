#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: pointer to file name
 * @letters: number of letters
 * Retrurn: 0 in fail and size in sucess
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fd, to_write, j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	j = read(fd, ptr, letters);
	to_write = write(STDOUT_FILENO, ptr, j);

	free(ptr);
	ptr = NULL;
	close(fd);

	return (to_write);
}
