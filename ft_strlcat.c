/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:53:52 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 05:27:14 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	int		index;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	index = 0;
	if (dstsize < len_dst + 1)
		return (len_src + dstsize);
	while (src[index] && len_dst + index < dstsize - 1)
	{
		dst[len_dst + index] = src[index];
		index++;
	}
	dst[len_dst + index] = '\0';
	return (len_src + len_dst);
}
