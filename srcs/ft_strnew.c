/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkeita <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 19:49:36 by pkeita            #+#    #+#             */
/*   Updated: 2018/03/07 19:49:36 by pkeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!(new_str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < (int)size)
		new_str[i++] = '\0';
	new_str[i] = '\0';
	return (new_str);
}
