/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <dhelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:44:46 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/14 13:51:17 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	str = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
		len--;
	}
	return (NULL);
}
