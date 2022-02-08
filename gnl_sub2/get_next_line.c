/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:06:52 by tbertozz          #+#    #+#             */
/*   Updated: 2022/01/14 10:20:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*readline(int fd, char *bufr, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, bufr, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		bufr[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, bufr);
		free(char_temp);
		char_temp = NULL;
		if (ft_strchr (bufr, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*bufr;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	bufr = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!bufr)
		return (0);
	line = readline(fd, bufr, backup);
	free(bufr);
	bufr = NULL;
	if (!line)
		return (NULL);
	backup = extract(line);
	return (line);
}
