/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:39:41 by dperez            #+#    #+#             */
/*   Updated: 2022/01/07 06:03:46 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp_src;
	char		*tmp_dst;

	tmp_src = src;
	tmp_dst = dst;
	if ((uintptr_t)dst > (uintptr_t) src)
	{
		tmp_dst += len - 1;
		tmp_src += len - 1;
		while (len > 0)
		{
			*tmp_dst = *tmp_src;
			tmp_dst--;
			tmp_src--;
			len--;
		}		
	}
	else if ((uintptr_t) dst < (uintptr_t) src)
		ft_memcpy(dst, src, len);
	return (dst);
}
