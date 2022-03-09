/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:34:45 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 05:32:40 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_map;
	t_list	*new_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst_map = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&lst_map, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_map, new_node);
		lst = lst->next;
	}
	return (lst_map);
}
