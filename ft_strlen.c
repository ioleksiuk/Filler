/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:27:46 by ichubare          #+#    #+#             */
/*   Updated: 2017/05/08 13:50:04 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

size_t	ft_strlen(const char *str)
{
	size_t	k;

	k = 0;
	while (*str != '\0')
	{
		k++;
		str++;
	}
	return (k);
}
