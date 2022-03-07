/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 03:07:18 by dperez            #+#    #+#             */
/*   Updated: 2022/03/07 03:27:09 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_putnbr(int n, int fd)
{
	char	digit;

	if (n >= 10)
		ft_putnbr(n / 10, fd);
	digit = '0' + n % 10;
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr(n, fd);
}
