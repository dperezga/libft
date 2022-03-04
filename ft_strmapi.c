/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:21:49 by dperez            #+#    #+#             */
/*   Updated: 2022/03/03 21:43:55 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				s_length;
	char			*f_s;
	unsigned int	index;

	index = 0;
	s_length = ft_strlen(s);
	f_s = (char *)malloc(sizeof(char) * (s_length + 1));
	while (s[index])
	{
		f_s[index] = f(index, s[index]);
		index++;
	}
	f_s[index] = '\0';
	return (f_s);
}
