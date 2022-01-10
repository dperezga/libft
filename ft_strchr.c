/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:08:09 by dperez            #+#    #+#             */
/*   Updated: 2022/01/11 00:17:19 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;
	int		len;

	len = ft_strlen(s);
	tmp_s = s;
	while (len > 0)
	{
		if (*tmp_s == c)
			return (tmp_s);
		tmp_s++;
		len--;
	}
	return (NULL);
}
