/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:04:35 by dhelly            #+#    #+#             */
/*   Updated: 2019/01/23 22:06:53 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	checkme(char **stack, char **line)
{
	char	*tmp;

	if (!(tmp = ft_strchr(*stack, '\n')))
		return (0);
	*tmp = '\0';
	*line = ft_strdup(*stack);
	tmp = ft_strdup(tmp + 1);
	free(*stack);
	*stack = tmp;
	return (1);
}

int	readme(int fd, char **stack, char **line)
{
	char	*tmp;
	int		ret;
	char	*buff;

	if (!(buff = ft_strnew(sizeof(char) * BUFF_SIZE)))
		return (-1);
	while ((ret = (int)read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (*stack)
		{
			tmp = *stack;
			*stack = ft_strjoin(tmp, buff);
			free(tmp);
			tmp = NULL;
		}
		else
			*stack = ft_strdup(buff);
		if (checkme(stack, line))
			break ;
	}
	free(buff);
	buff = NULL;
	return (ret > 0 ? 1 : ret);
}

int	get_next_line(const int fd, char **line)
{
	static char	*stack[MAX_FD];
	int			ret;

	if (fd < 0 || fd >= MAX_FD || !(read(fd, stack[fd], 0) == 0))
		return (-1);
	if (stack[fd])
	{
		if ((checkme(&stack[fd], line)))
			return (1);
	}
	ret = readme(fd, &stack[fd], line);
	if (ret != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (ret == 0 && *line)
			*line = NULL;
		return (ret);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
