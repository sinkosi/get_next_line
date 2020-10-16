/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:27:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/04 12:18:48 by sinkosi          ###   ########.fr       */
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
	//fd = open(argv[1], O_RDONLY);
    ft_putendl(argv[0]);
    fd = 0;
	while (get_next_line(fd, &line) > 0)
	{
		ft_putendl(line);
		i++;
	}
	ft_putnbr(i);
	close(fd);
	return (0);
}
