/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:21:50 by dperez            #+#    #+#             */
/*   Updated: 2022/01/06 00:46:00 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const char *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
#endif
