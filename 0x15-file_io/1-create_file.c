#include "main.h"
/**
 * create_file - Function to create file
 * @filename: pointer to file name
 * @text_content: pointer of text
 * Return: -1 in fail 1 in sucess
 */
int create_file(const char *filename, char *text_content)
{
	int fnm, wr, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fnm = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fnm, text_content, len);

	if (fnm == -1 || wr == -1)
		return (-1);

	close(fnm);

	return (1);
}
