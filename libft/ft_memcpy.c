/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <dhelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:02:31 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/14 13:58:08 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*str;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}
