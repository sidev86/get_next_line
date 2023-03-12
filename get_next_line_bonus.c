/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sibrahim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:38:26 by sibrahim          #+#    #+#             */
/*   Updated: 2022/11/21 11:45:57 by sibrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stddef.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

static void	ft_read_buf(char **str, char *buf, int fd)
{
	int		i;
	char	*tmp;

	if (!ft_strchr(str[fd], '\n') || !str[fd])
		i = read(fd, buf, BUFFER_SIZE);
	else
		i = ft_strlen(str[fd]);
	while (i > 0 && !ft_strchr(str[fd], '\n'))
	{
		buf[i] = 0;
		if (!str[fd])
			str[fd] = ft_substr(buf, 0, i);
		else
		{
			tmp = str[fd];
			str[fd] = ft_strjoin(str[fd], buf);
			free(tmp);
		}
		if (ft_strchr(str[fd], '\n') || i < BUFFER_SIZE)
			break ;
		i = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
}

static char	*ft_extract_line(char **str, int fd)
{
	char	*line;
	char	*tmp;
	int		s_len;
	int		al_bytes;

	line = NULL;
	if (ft_strchr(str[fd], '\n'))
	{
		s_len = ft_strlen(str[fd]);
		al_bytes = ft_strlen(ft_strchr(str[fd], '\n'));
		line = ft_substr(str[fd], 0, s_len - al_bytes + 1);
		tmp = str[fd];
		str[fd] = ft_substr(str[fd], s_len - al_bytes + 1, al_bytes - 1);
		free(tmp);
		return (line);
	}
	line = ft_substr(str[fd], 0, ft_strlen(str[fd]));
	free(str[fd]);
	str[fd] = 0;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*str[4096];
	char		*buf;

	buf = malloc(sizeof(*buf) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	if (fd == -1 || BUFFER_SIZE < 1)
	{
		free(buf);
		return (NULL);
	}
	ft_read_buf(str, buf, fd);
	if (str[fd] && ft_strlen(str[fd]) > 0)
		return (ft_extract_line(str, fd));
	free(str[fd]);
	str[fd] = 0;
	return (NULL);
}
