/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:47:37 by maouzal           #+#    #+#             */
/*   Updated: 2022/10/13 11:18:18 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memcpy(void	*dest, const void *src, size_t	n)
{
	size_t		x;
	char		*des;
	const char	*sr;

	des = dest;
	sr = src;
	x = 0;
	if (des == sr || n == 0)
		return (des);
	while (sr[x] != '\0' && x < n)
	{
		des[x] = sr[x];
		x++;
	}
	return (des);
}
