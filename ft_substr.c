/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:34:07 by dperez            #+#    #+#             */
/*   Updated: 2022/01/12 18:43:05 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = (char *)calloc(len, sizeof(sub_s));
	if (sub_s == NULL)
		return (NULL);
	ft_strlcpy(sub_s, s + start, len);
	return (sub_s);
}
