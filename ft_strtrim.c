/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:25:45 by dperez            #+#    #+#             */
/*   Updated: 2022/01/13 03:47:49 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_isin(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	char	*begin;
	char	*end;

	begin = (char *)s1;
	end = begin + ft_strlen(s1) - 1;
	trimmed_str = (char *)ft_calloc(ft_strlen(s1), sizeof(trimmed_str));
	if (trimmed_str == NULL)
		return (NULL);
	while (*begin)
	{
		if (ft_isin(set, *begin))
			begin++;
		else
			break ;
	}
	while (*end)
	{
		if (ft_isin(set, *end))
			end--;
		else
			break ;
	}
	ft_strlcpy(trimmed_str, begin, (end - begin) + 2);
	return (trimmed_str);
}
