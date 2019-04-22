/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 11:27:36 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/13 22:31:42 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	counter(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = counter(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		n *= -1;
	while (--len > 0)
	{
		str[len] = n % 10 + 48;
		n /= 10;
		if (n == 0)
		{
			str[--len] = '-';
			return (str);
		}
	}
	str[len] = n + 48;
	return (str);
}
