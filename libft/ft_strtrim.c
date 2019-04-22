/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <dhelly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 21:13:53 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/13 18:28:20 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checkstart(char const *s)
{
	int j;

	j = 0;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	return (j);
}

static	int	checkend(char const *s)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		i++;
		len--;
	}
	return (i);
}

static	int	retlen(char const *s)
{
	int len;

	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (s == NULL)
		return (NULL);
	j = checkstart(s);
	i = j;
	len = ft_strlen(s);
	if (i != len)
		i += checkend(s);
	if (!(str = (char *)malloc(ft_strlen(s) - i + 1)))
		return (NULL);
	i = 0;
	len = retlen(s);
	while (j <= len)
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
