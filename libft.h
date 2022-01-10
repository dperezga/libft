/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:21:50 by dperez            #+#    #+#             */
/*   Updated: 2022/01/11 06:57:30 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<stdint.h>

size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const char *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *restrict dst,
			const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst,
			const char *restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif
