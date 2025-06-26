/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:51:28 by dkhoo             #+#    #+#             */
/*   Updated: 2025/06/27 01:38:04 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line_bonus.h"
#include "../../includes/libft.h"

/**
	@brief Loads contents from 'save' into 'line' and resets
	'save' to NULL

	@param line Pointer to char pointer where the contents from
	'save' will be stored
	@param save Pointer to char pointer where contents to be saved
	into 'line' is loaded from

	@return SUCCESS (1) upon success or FAIL (0) if memory allocation
	fails
*/
static int	ft_load_save(char **line, char **save)
{
	int	save_len;

	*line = NULL;
	if (*save)
	{
		save_len = ft_strlen(*save);
		*line = malloc(save_len + 1);
		if (!line)
			return (FAIL);
		ft_strlcpy(*line, *save, save_len + 1);
		free(*save);
	}
	*save = NULL;
	return (SUCCESS);
}

/**
	@brief Reads a line from file descriptor 'fd' until a
	newline or EOF is reached

	@note read returns 0 when EOF is reached, and -1 if an
	error occurred

	@param fd File descriptor to read from
	@param line Pointer to string where line will be stored

	@return READ_SUCCESS (1) if a line was read, READ_EOF (0)
	if the EOF was reached, and READ_ERROR (-1) if an error
	occurred
*/
static int	ft_read_line(int fd, char **line)
{
	char	*read_buf;
	int		bytes_read;
	char	*tmp;

	while (ft_idxof_newline(*line) < 0)
	{
		read_buf = malloc(BUFFER_SIZE + 1);
		if (!read_buf)
			return (READ_ERROR);
		bytes_read = read(fd, read_buf, BUFFER_SIZE);
		if (bytes_read <= 0)
			return (free(read_buf), bytes_read);
		else
		{
			read_buf[bytes_read] = '\0';
			tmp = *line;
			*line = ft_strjoin(*line, read_buf);
			free(tmp);
			free(read_buf);
			if (!(*line))
				return (READ_ERROR);
		}
	}
	return (READ_SUCCESS);
}

/**
	@brief Splits a string at the newline character in 'line' -
	allocating the string terminating at the newline back to
	'line' and saving the remaining content into 'save'

	@param save Pointer to char pointer where the remaining content
	in 'line' will be saved to
	@param line Pointer to char pointer where the original string will
	retrieved from, and where the newly-allocated substring ending with
	the newline character will be saved to

	@return SUCCESS (1) on success, or FAIL (0) if memory allocation fails
*/
static int	ft_save_and_allocate(char **save, char **line)
{
	int		newline_idx;
	int		save_len;
	char	*tmp;

	newline_idx = ft_idxof_newline(*line);
	save_len = ft_strlen(*line) - (newline_idx + 1);
	if (save_len > 0 && newline_idx >= 0)
	{
		*save = ft_substr(*line, newline_idx + 1, save_len);
		if (!(*save))
			return (FAIL);
	}
	tmp = *line;
	*line = ft_substr(*line, 0, newline_idx + 1);
	free(tmp);
	if (!(*line))
		return (FAIL);
	return (SUCCESS);
}

/**
	@brief Returns the next line ending with the newline character
	from the file descriptor 'fd'. Up to MAX_FD (1024) file descriptors
	can be read from simultaneously.

	@param fd File descriptor to read from

	@return The next line ending with the newline character for the given
	file descriptor, or the line ending with EOF, or NULL if an error
	occurred.
*/
char	*get_next_line(int fd)
{
	static char	*save_buffer[MAX_FD];
	char		*line_buffer;
	int			read_status;

	if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_load_save(&line_buffer, &save_buffer[fd]) == FAIL)
		return (NULL);
	read_status = ft_read_line(fd, &line_buffer);
	if (read_status == READ_ERROR)
		return (NULL);
	else if (read_status == READ_EOF)
	{
		if (line_buffer && *line_buffer)
			return (line_buffer);
		return (NULL);
	}
	if (ft_save_and_allocate(&save_buffer[fd], &line_buffer) == FAIL)
		return (free(line_buffer), NULL);
	return (line_buffer);
}
