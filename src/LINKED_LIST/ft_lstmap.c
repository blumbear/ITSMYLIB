/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:40:00 by ttaquet           #+#    #+#             */
/*   Updated: 2023/12/15 18:07:32 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itsmylib.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del_fun)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (list)
	{
		new_elem = ft_lstnew(f(list->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del_fun);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		list = list->next;
	}
	return (new_list);
}
