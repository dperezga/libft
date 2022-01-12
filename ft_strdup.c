/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:38:18 by dperez            #+#    #+#             */
/*   Updated: 2022/01/12 17:58:16 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		k;

	k = 0;
	dup = (char *)ft_calloc(ft_strlen(s1), sizeof(dup));
	if (dup == NULL)
		return (NULL);
	while (s1[k])
	{
		dup[k] = s1[k];
		k++;
	}
	dup[k] = '\0';
	return (dup);
}
