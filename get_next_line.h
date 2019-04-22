/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 19:02:29 by dhelly            #+#    #+#             */
/*   Updated: 2019/01/24 14:01:21 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
# define MAX_FD 4864

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
