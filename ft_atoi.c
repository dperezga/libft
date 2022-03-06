/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:13:21 by dperez            #+#    #+#             */
/*   Updated: 2022/03/06 18:39:34 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_iswspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_sign(const char *str)
{
	if (*str == '+' || ft_isdigit(*str))
		return (1);
	else if (*str == '-')
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long		num;
	int			sign;
	const char	*tmp_str;

	tmp_str = str;
	num = 0;
	while (ft_iswspace(*tmp_str))
		tmp_str++;
	sign = ft_sign(tmp_str);
	if (*tmp_str == '-' || *tmp_str == '+')
		tmp_str++;
	while (*tmp_str && ft_isdigit(*tmp_str))
	{
		num *= 10;
		num += (*tmp_str - 48);
		if (num > 2147483647 && sign == 1)
			return (-1);
		if (num > 2147483648 && sign == -1)
			return (0);
		tmp_str++;
	}
	return (num * sign);
}
