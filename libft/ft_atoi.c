/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:20:08 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/11 12:58:00 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				sign;

	result = 0;
	sign = 1;
	while (*str == 32 || *str == '\t' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while ((*str != '\0' && *str >= '0' && *str <= '9'))
	{
		result = result * 10 + *str - '0';
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		str++;
	}
	return (result * sign);
}
