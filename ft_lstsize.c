/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 03:06:59 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 03:39:14 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*node;

	node = lst;
	lst_size = 1;
	if (lst == NULL)
		return (0);
	while ((*node).next != NULL)
	{
		node = (*node).next;
		lst_size++;
	}
	return (lst_size);
}
