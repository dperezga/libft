/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:18:35 by dperez            #+#    #+#             */
/*   Updated: 2022/01/12 22:09:27 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*tmp_haystack;
	size_t		needle_len;
	size_t		counter;

	counter = 0;
	needle_len = ft_strlen(needle);
	tmp_haystack = haystack;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*tmp_haystack)
	{
		if (counter + needle_len >= len)
			return (NULL);
		if (ft_strncmp(tmp_haystack, needle, needle_len) == 0)
			return ((char *)tmp_haystack);
		counter++;
		tmp_haystack++;
	}
	return (NULL);
}
