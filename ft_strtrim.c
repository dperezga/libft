/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:25:45 by dperez            #+#    #+#             */
/*   Updated: 2022/03/06 21:10:31 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	char	*begin;
	char	*end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	begin = (char *)s1;
	end = begin + ft_strlen(s1) - 1;
	while (*begin)
	{
		if (ft_strchr(set, *begin) == NULL)
			break;
        begin++;
	}
	while (*end)
	{
		if (ft_strchr(set, *end) == NULL)
            break;
		end--;
	}
    if (begin >= end)
        return (ft_strdup("")); 
    trimmed_str = (char *)ft_calloc(end - begin + 2, sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, begin, (end - begin) + 2);
	return (trimmed_str);
}
