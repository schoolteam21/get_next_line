/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:37:59 by dhelly            #+#    #+#             */
/*   Updated: 2018/12/13 18:16:28 by dhelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*result;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlist = f(lst);
	result = newlist;
	lst = lst->next;
	while (lst)
	{
		if (!(newlist->next = (*f)(lst)))
		{
			while (result->next)
			{
				newlist = result->next;
				free(result);
				result = newlist;
			}
		}
		lst = lst->next;
		newlist = newlist->next;
	}
	return (result);
}
