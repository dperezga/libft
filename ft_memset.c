/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:15:30 by dperez            #+#    #+#             */
/*   Updated: 2022/01/06 00:26:50 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = b;
	while (len > 0)
	{
		*temp = c;
		temp++;
		len--;
	}
	return (b);
}
