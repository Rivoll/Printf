/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnfdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkeita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:49:44 by pkeita            #+#    #+#             */
/*   Updated: 2018/03/07 19:49:46 by pkeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strnfdup(char **s1, int len)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(*s1) || !s1)
		return (NULL);
	if (len < 0)
		len = 0;
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((*s1)[i] && i < len)
	{
		dest[i] = (*s1)[i];
		i++;
	}
	dest[i] = '\0';
	ft_strdel(s1);
	return (dest);
}
