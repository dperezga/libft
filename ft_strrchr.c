/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:15:37 by dperez            #+#    #+#             */
/*   Updated: 2022/01/11 00:17:20 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp_s;
	int		len;

	len = ft_strlen(s);
	tmp_s = s + len;
	while (len > 0)
	{
		if (*tmp_s == c)
			return (tmp_s);
		tmp_s--;
		len--;
	}
	return (NULL);
}