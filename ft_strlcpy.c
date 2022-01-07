/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:19:21 by dperez            #+#    #+#             */
/*   Updated: 2022/01/07 09:28:17 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	if (len < dstsize)
	{
		ft_memmove(dst, src, len);
		ft_memset(dst + len, 0, 1);
		return (len);
	}
	ft_memmove(dst, src, dstsize - 1);
	ft_memset(dst + dstsize - 1, 0, 1);
	return (len);
}
