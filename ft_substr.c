/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:34:07 by dperez            #+#    #+#             */
/*   Updated: 2022/01/13 02:18:21 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = (char *)calloc(len + 1, sizeof(sub_s));
	if (sub_s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return ("");
	ft_strlcpy(sub_s, s + start, len + 1);
	return (sub_s);
}
