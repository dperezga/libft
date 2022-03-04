/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez <dperez@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:12:09 by dperez            #+#    #+#             */
/*   Updated: 2022/03/04 01:37:16 by dperez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

static size_t	ft_arraysize(long int n)
{
	size_t	a_size;

	a_size = 0;
	if (n < 0)
	{
		n = -n;
		a_size++;
	}
	while (n > 0)
	{
		n /= 10;
		a_size++;
	}
	return (a_size);
}

char	*ft_itoa(int n)
{
	char		*nb_array;
	size_t		array_size;

	if (n == 0)
		return ("0");
	array_size = ft_arraysize((long int)n);
	nb_array = (char *)malloc(sizeof(n) * array_size + 1);
	if (nb_array == NULL)
		return (NULL);
	ft_bzero(nb_array, array_size + 1);
	if (n < 0)
	{
		*nb_array = '-';
		n = -n;
	}
	nb_array += array_size - 1;
	while (n > 0)
	{
		*nb_array = 48 + (n % 10);
		n /= 10;
		nb_array--;
	}
	if (*nb_array == '-')
		return (nb_array);
	return (++nb_array);
}
