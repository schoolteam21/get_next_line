/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:41:35 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/14 00:32:13 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_words(char const *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

static	int		letters(char const *s, char c, int j)
{
	int i;

	i = 0;
	while (s[j] != c)
	{
		i++;
		j++;
	}
	return (i);
}

static	void	ft_free(char **str, int i)
{
	int ind;

	ind = 0;
	while (ind < i)
	{
		ft_strdel(str + ind);
		ind++;
	}
	free(str);
	str = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		words;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	words = ft_words(s, c);
	if (!(array = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		if (!(array[i] = ft_strsub(s, j, letters(s, c, j))))
		{
			ft_free(array, i);
			return (NULL);
		}
		j = j + letters(s, c, j);
		i++;
	}
	return (array);
}
