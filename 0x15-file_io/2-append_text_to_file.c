#include "main.h"

/**
 * append_text_to_file - appends  text to the end of an existing file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_lett;
	int r_wr;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (num_lett = 0; text_content[num_lett]; num_lett++)
			;

		r_wr = write(file_desc, text_content, num_lett);

		if (r_wr == -1)
			return (-1);
	}

	close(file_desc);

	return (1);
}
