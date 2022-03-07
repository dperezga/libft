/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 06:47:52 by dperez            #+#    #+#             */
/*   Updated: 2022/03/07 00:57:53 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free_all(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
	{
		free (splitted[i]);
		i++;
	}
	free (splitted);
	return (NULL);
}

static size_t	ft_chunks(char const *s, char c)
{
	size_t	nb_chunks;
	char	*tmp_s;

	if (!*s)
		return (0);
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

static void	ft_next_word(char **tmp_s, char c, int choice)
{
	if (choice == 0)
	{
		while (**tmp_s && **tmp_s == c)
			(*tmp_s)++;
	}
	if (choice == 1)
	{
		while (**tmp_s && **tmp_s != c)
			(*tmp_s)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	char	*tmp_s;
	size_t	nb_words;
	size_t	k;

	if (!s)
		return (NULL);
	nb_words = ft_chunks(s, c);
	splitted = (char **)malloc((nb_words + 1) * sizeof(char *));
	if (splitted == NULL)
		return (NULL);
	k = 0;
	tmp_s = (char *)s;
	while (k < nb_words)
	{
		ft_next_word(&tmp_s, c, 0);
		splitted[k] = (char *)malloc(sizeof(char) * (ft_len(tmp_s, c) + 1));
		if (splitted[k] == NULL)
			return (ft_free_all(splitted));
		ft_strlcpy(splitted[k], tmp_s, ft_len(tmp_s, c) + 1);
		ft_next_word(&tmp_s, c, 1);
		k++;
	}
	splitted[k] = NULL;
	return (splitted);
}
