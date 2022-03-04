/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:44:45 by dperez            #+#    #+#             */
/*   Updated: 2022/03/04 01:41:19 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	jstr_len;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 && s2 == NULL)
		return (ft_strdup(s1));
	if (s1 == NULL && s2)
		return (ft_strdup(s2));
	jstr_len = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)ft_calloc((jstr_len + 1), sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy(joined_str, s1, jstr_len + 1);
	ft_strlcat(joined_str, s2, jstr_len + 1);
	return (joined_str);
}
