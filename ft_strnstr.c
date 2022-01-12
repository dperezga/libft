/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:18:35 by dperez            #+#    #+#             */
/*   Updated: 2022/01/12 14:28:17 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*tmp_haystack;

	tmp_haystack = haystack;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*tmp_haystack)
	{
		if (ft_strncmp(tmp_haystack, needle, len) == 0)
			return ((char *)tmp_haystack);
		tmp_haystack++;
	}
	return (NULL);
}
