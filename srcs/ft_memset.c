/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkeita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:47:32 by pkeita            #+#    #+#             */
/*   Updated: 2018/03/07 19:47:33 by pkeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;

	i = 0;
	while (i < (int)len)
		((char*)b)[i++] = (unsigned char)c;
	return (b);
}
