/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:58:49 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/04 12:18:18 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char *line;

	while (get_next_line(0, &line) > 0)
		ft_putendl(line);
	return (0);
}
