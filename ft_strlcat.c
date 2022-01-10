/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:53:52 by dperez            #+#    #+#             */
/*   Updated: 2022/01/10 21:27:10 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst + len_src)
	{
		ft_memmove(dst + len_dst, src, dstsize - len_dst - 1);
		return (len_src + len_dst);
	}
	ft_memmove(dst + len_dst, src, len_src - 1);
	return (len_src + len_dst);
}
