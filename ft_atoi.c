/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:13:21 by dperez            #+#    #+#             */
/*   Updated: 2022/01/12 16:43:45 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_iswspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_sign(const char *str)
{
	if (*str == '+')
		return (1);
	else if (*str == '-')
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			num;
	int			sign;
	const char	*tmp_str;

	tmp_str = str;
	num = 0;
	while (ft_iswspace(*tmp_str))
		tmp_str++;
	sign = ft_sign(tmp_str);
	if (!ft_isdigit(*(++tmp_str)))
		return (0);
	while (*tmp_str)
	{
		num *= 10;
		num += (*tmp_str - 48);
		tmp_str++;
	}
	return (num * sign);
}
