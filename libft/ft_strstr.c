/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:49:47 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/16 15:49:45 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int y;
	int tmp;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[y])
		{
			tmp = i;
			while (haystack[i++] == needle[y++])
			{
				if (needle[y] == '\0')
					return ((char *)haystack + tmp);
			}
			y = 0;
			i = tmp;
		}
		i++;
	}
	return (NULL);
}
