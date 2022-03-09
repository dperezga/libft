/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:18:35 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 02:08:57 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	size_t		counter;

	counter = 0;
	needle_len = ft_strlen(needle);
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (counter + needle_len > len)
			return (NULL);
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		counter++;
		haystack++;
	}
	return (NULL);
}
