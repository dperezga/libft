/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:12:09 by dperez            #+#    #+#             */
/*   Updated: 2022/03/07 03:28:37 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static long int	ft_absolut(long int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

static int	ft_arraysize(long int n)
{
	int	a_size;

	a_size = 0;
	if (n <= 0)
		a_size = 1;
	while (n != 0)
	{
		n /= 10;
		a_size++;
	}
	return (a_size);
}

char	*ft_itoa(int n)
{
	char		*nb_array;
	int			array_size;
	int			sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	array_size = ft_arraysize((long int)n);
	nb_array = (char *)malloc(sizeof(char) * array_size + 1);
	if (nb_array == NULL)
		return (NULL);
	nb_array[array_size] = '\0';
	while (--array_size >= 0)
	{
		nb_array[array_size] = '0' + ft_absolut(n % 10);
		n = ft_absolut(n / 10);
	}
	if (sign == -1)
		nb_array[0] = '-';
	return (nb_array);
}
