/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 01:39:33 by dperez            #+#    #+#             */
/*   Updated: 2022/01/11 08:46:55 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp_s;

	tmp_s = s;
	while (n > 0)
	{
		if (*tmp_s == (unsigned char) c)
			return ((void *) tmp_s);
		tmp_s++;
		n--;
	}
	return (NULL);
}
