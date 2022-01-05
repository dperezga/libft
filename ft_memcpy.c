/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:54:16 by dperez            #+#    #+#             */
/*   Updated: 2022/01/06 01:51:22 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	tmp_src = src;
	tmp_dest = dest;
	while (n > 0)
	{
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
		n--;
	}
	return (dest);
}
