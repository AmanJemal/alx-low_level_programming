#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_lett;
	int r_wr;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_lett = 0; text_content[num_lett]; num_lett++)
		;

	r_wr = write(file_desc, text_content, num_lett);

	if (r_wr == -1)
		return (-1);

	close(file_desc);

	return (1);
}
