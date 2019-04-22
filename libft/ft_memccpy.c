/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <dhelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:18:13 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/14 13:58:52 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*str;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (void *)((unsigned char *)dest + i + 1);
		i++;
	}
	return (NULL);
}
