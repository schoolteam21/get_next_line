/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:10:10 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/16 15:48:07 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		y;
	size_t	tmp;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i <= len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[y])
		{
			tmp = i;
			while (haystack[i++] == needle[y++] && i <= len)
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
