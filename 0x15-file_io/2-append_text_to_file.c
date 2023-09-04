/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer of file
 * @text_content: pointer to text content
 * Return: -1 in fail, 1 in sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int to_open, to_wrtie, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	to_open = open(filename, O_WRONLY | O_APPEND);
	to_wrtie = write(to_open, text_content, len);

	if (to_open == -1 || to_wrtie == -1)
		return (-1);

	close(to_open);

	return (1);
}
