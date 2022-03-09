/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:24:34 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 02:43:53 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_list;

	my_list = malloc(sizeof(t_list));
	if (my_list == NULL)
		return (NULL);
	my_list->content = content;
	my_list->next = NULL;
	return (my_list);
}
