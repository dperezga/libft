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
#include<stdio.h>

static size_t	ft_len(char const *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	ft_chunks(char const *s, char c)
{
	size_t	nb_chunks;
	char *tmp_s;

	nb_chunks = 0;
	tmp_s = (char *)s;
	if (*tmp_s != c)
	{
		nb_chunks++;
		tmp_s++;
	}
	while (*tmp_s != '\0')
	{
		if (*tmp_s == c && *(tmp_s + 1) != c && *(tmp_s + 1))
			nb_chunks++;
		tmp_s++;
	}
	return (nb_chunks);
}

char	**ft_split(char const *s, char c)
{
	printf("%s has %ld words\n", s, ft_chunks(s, c));
	char	**splitted;
	char	*tmp_s;
	size_t	nb_words;
	size_t	k;

	nb_words = ft_chunks(s, c);
	splitted = (char **)malloc(nb_words * sizeof(char *));
	k = 0;
	tmp_s = (char *)s;
	while (*tmp_s && *tmp_s == c)
		tmp_s++;
	while (tmp_s != NULL && nb_words - k > 0 && *tmp_s)
	{
		splitted[k] = (char *)malloc(ft_len(tmp_s, c) * sizeof(char));
		ft_memmove(splitted[k], tmp_s, ft_len(tmp_s, c));
		printf("*s: %c and len: %ld\n", *tmp_s, ft_len(tmp_s, c));
		tmp_s = ft_strchr(tmp_s, c);
		while (tmp_s != NULL && *tmp_s && *tmp_s == c)
			tmp_s++;
		k++;
	}
	return (splitted);	
}
