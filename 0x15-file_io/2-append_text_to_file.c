#include "main.h"

/**
* append_text_to_file- function to append text at the end of a file
* @filename: file to append
* @text_content: string to add to file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t text_len, append_status;
	int file_desc;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_desc);
		return (1);
	}

	text_len = 0;

	while (*(text_content + text_len))
		text_len++;

	append_status = write(file_desc, text_content, text_len);

	if (append_status == -1)
	{
		close(file_desc);
	return (-1);
	}
		close(file_desc);
	return (1);
}
