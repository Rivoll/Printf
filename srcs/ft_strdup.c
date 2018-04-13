/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkeita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:49:03 by pkeita            #+#    #+#             */
/*   Updated: 2018/03/07 19:49:04 by pkeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	if (!s1)
		return (NULL);
	dest = NULL;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dest)
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
