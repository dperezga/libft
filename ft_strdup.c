/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:38:18 by dperez            #+#    #+#             */
/*   Updated: 2022/01/13 01:04:39 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;

	dup = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(dup));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}
