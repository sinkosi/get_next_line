/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:27:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/03 16:19:40 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	size_t	i;
	char	*line;

	if (argc < 1)
		return (0);
	i = 0;
	fd = open(argv[1], O_RDONLY);
	while(get_next_line(fd, &line) > 0)
	{
		ft_putendl(line);
		i++;
	}
	ft_putnbr(i);
	close(fd);
	return (0);
}
	
