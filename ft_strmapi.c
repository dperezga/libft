/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:21:49 by dperez            #+#    #+#             */
/*   Updated: 2022/03/06 21:07:34 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				s_length;
	char			*f_s;
	unsigned int	index;

	if (s == NULL || f == NULL)
		return (NULL);
	index = 0;
	s_length = ft_strlen(s);
	f_s = (char *)malloc(sizeof(char) * (s_length + 1));
	if (f_s == NULL)
		return (NULL);
	while (s[index])
	{
		f_s[index] = f(index, s[index]);
		index++;
	}
	f_s[index] = '\0';
	return (f_s);
}
