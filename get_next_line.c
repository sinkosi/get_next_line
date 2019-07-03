/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:30:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/03 11:25:59 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
int    get_next_line(const int fd, char **line)
{
    static char    *c[2147483647];
    char        buffer[BUFF_SIZE + 1];
    char        *tmp;
    ssize_t        b;
    int            endl;
    
    if (fd < 0 || (!c[fd] && !(c[fd] = ft_strnew(1))) || !line)
        return (-1);
    while (!ft_strchr(c[fd], '\n') && (b = read(fd, buffer, BUFF_SIZE)) > 0)
    {
        buffer[b] = '\0';
        tmp = c[fd];
        c[fd] = ft_strjoin(c[fd], buffer);
        ft_strdel(&tmp);
    }
    if (b == -1 || !*(tmp = c[fd]))
        return (b == -1 ? -1 : 0);
    if ((endl = (ft_strchr(c[fd], '\n') > 0)))
        *line = ft_strsub(c[fd], 0, ft_strchr(c[fd], '\n') - c[fd]);
    else
        *line = ft_strdup(c[fd]);
    c[fd] = ft_strsub(c[fd], (unsigned int)(ft_strlen(*line) + endl),
                      (size_t)(ft_strlen(c[fd]) - (ft_strlen(*line) + endl)));
    ft_strdel(&tmp);
    return (!(!c[fd] && !ft_strlen(*line)));
}
*/

int		end(char *buf)
{
	int i;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

int		get_line(const int fd, char *buf, char *strs[fd])
{
	int		cs;
	char	*tmp;

	while ((end(buf) != 1) && ((cs = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[cs] = '\0';
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	if (cs < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				cs;
	static char		*strs[2147483647];
	char			*buf;
	char			*str;
	char			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!strs[fd])
		strs[fd] = ft_strnew(0);
	if ((cs = get_line(fd, buf, strs)) == -1)
		return (-1);
	if ((str = ft_strchr(strs[fd], '\n')))
	{
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		tmp = strs[fd];
		strs[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
