/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkeita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:47:26 by pkeita            #+#    #+#             */
/*   Updated: 2018/03/07 19:47:27 by pkeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_count_digit(long long nb, int base)
{
	int result;

	result = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		result++;
	while (nb != 0)
	{
		nb /= base;
		result++;
	}
	return (result);
}

char		*ft_llitoa_base(long long nb, int base, int maj)
{
	char	*dest;
	int		nb_char;

	if (base < 2 || base > 36 || (maj != 0 && maj != 1))
		return (NULL);
	nb_char = ft_count_digit(nb, base);
	if (!(dest = ft_strnew(nb_char + 1)))
		return (NULL);
	dest[nb_char--] = '\0';
	if (nb < 0)
	{
		nb % base > -10 ? dest[nb_char--] = -(nb % base) + '0' : 0;
		nb % base <= -10 ? dest[nb_char--] = -(nb % base) + 87 + maj * -32 : 0;
		dest[0] = '-';
		nb /= -base;
	}
	while (nb_char > -1 && dest[nb_char] != '-')
	{
		nb % base < 10 ? dest[nb_char--] = nb % base + '0' : 0;
		nb % base >= 10 ? dest[nb_char--] = nb % base + 87 + maj * -32 : 0;
		nb /= base;
	}
	return (dest);
}
