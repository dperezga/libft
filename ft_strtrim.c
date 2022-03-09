/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:25:45 by dperez            #+#    #+#             */
/*   Updated: 2022/03/09 01:16:14 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_extreme(const char *s1, char const *set, int choice)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	while (index < len)
	{
		if (choice == 0 && ft_strchr(set, s1[index]) == NULL)
			break ;
		if (choice == 1 && ft_strchr(set, s1[len - index - 1]) == NULL)
			break ;
		index++;
	}
	if (choice == 0)
		return (index);
	else
		return (len - index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		begin;
	int		end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	begin = ft_extreme(s1, set, 0);
	end = ft_extreme(s1, set, 1);
	if (begin >= end)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc((end - begin + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + begin, (end - begin) + 1);
	return (trimmed_str);
}
