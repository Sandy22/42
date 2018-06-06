/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:42:20 by smadnaik          #+#    #+#             */
/*   Updated: 2018/05/30 02:36:58 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** This method handles a line at a time. Reads into buffer.
** If end of string is reached, it calls get_next_line() to read again.
*/

int		ft_new_line(char **s, char **line, int fd, int ret)
{
	char	*temp;
	int		len;

	len = 0;
	while (s[fd][len] != '\0' && s[fd][len] != '\n')
		len++;
	if (s[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	else if (s[fd][len] == '\n')
	{
		*line = ft_strsub(s[fd], 0, len);
		temp = ft_strdup(s[fd] + len + 1);
		free(s[fd]);
		s[fd] = temp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	return (1);
}

/*
**	This method reads into buffer and keeps sync among multiple fds by using
**	strjoin. It calls ft_new_line if it has more lines to read.
*/

int		get_next_line(const int fd, char **line)
{
	static char	*s[255];
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		temp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (ft_new_line(s, line, fd, ret));
}
