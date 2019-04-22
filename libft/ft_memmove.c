/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:06:23 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/11 12:29:15 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*str;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (str < dest)
		while (len--)
			dest[len] = str[len];
	else
		ft_memcpy(dest, str, len);
	return ((void *)dest);
}
