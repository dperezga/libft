/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 06:47:52 by dperez            #+#    #+#             */
/*   Updated: 2022/01/20 07:02:51 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_chunks(char const *s, char c)
{
	size_t	nb_chunks;
	
	nb_chunks = 0;
	while (*s != '\0')
	{
		if (*s == c && *s + 1 != c)
			nb_chunks;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
		
}
